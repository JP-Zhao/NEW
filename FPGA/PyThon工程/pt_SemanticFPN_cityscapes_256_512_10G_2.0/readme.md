# Semantic Segmentation with SemanticFPN(ResNet18) on Cityscapes
### Contents
1. [Installation](#installation)
2. [Preparation](#preparation)
3. [Train/Eval](#traineval)
4. [Performance](#performance)
5. [Model_info](#model_info)

### Installation

1. Environment requirement
    - pytorch, opencv, tqdm ...
    - vai_q_pytorch(Optional, required by quantization)
    - XIR Python frontend (Optional, required by quantization)

2. Installation with Docker

   - Please refer to [vitis-ai](https://github.com/Xilinx/Vitis-AI/tree/master/) for how to obtain the docker image.

   - Activate pytorch virtual envrionment in docker:
   ```shell
   conda activate vitis-ai-pytorch
   ```
   - Install all the python dependencies using pip:
   ```shell
   pip install --user -r requirements.txt
   ```
   - If you encounter torch compatibility issue, you could consider switching the environment of different torch version.
   
   - PyTorch1.4 is recommended first. Please refer to [Model_info](#model_info)
   
   

### Preparation

1. Dataset description

    - check dataset soft link or download cityscapes dataset (https://www.cityscapes-dataset.com/downloads)
    - grundtruth folder: gtFine_trainvaltest.zip [241MB]
    - image folder: leftImg8bit_trainvaltest.zip [11GB]

2. Dataset diretory structure
   ```
   + data
     + cityscapes
       + leftImg8bit
         + train
         + val
       + gtFine
         + train
         + val
    ```

### Train/Eval

1. Visulization
    ```shell
    # Select a demo image and put it under ‘data/demo/’ for visualization
    cp data/cityscapes/leftImg8bit/val/frankfurt/frankfurt_000000_000294_leftImg8bit.png data/demo/
    # Run demo
    bash run_demo.sh
    ```


2. Evaluation
    ```shell
    bash run_eval.sh
    ```
3. Training
    ```shell
    bash run_train.sh
    ```
4. Quantization
    ```shell
    bash run_quant.sh
    ```
### Performance

| model | input size | FLOPs | mIoU on Cityscapes Validation|
|-------|------------|--------------|-------|
| SemanticFPN(ResNet18)| 256x512 | 10G | 62.9% |

| model | input size | FLOPs | INT8 mIoU on Cityscapes Validation|
|-------|------------|---------------|--------------|
| SemanticFPN(ResNet18)| 256x512 | 10G | 62.3% |

### Model_info

1. Data preprocess
  ```
  data channel order: BGR(0~255)                  
  resize: h * w = 256 * 512 (cv2.resize(image, (new_w, new_h)).astype(np.float32))
  mean = (0.485, 0.456, 0.406)
  std = (0.229, 0.224, 0.225)
  input = input / 255.0
  input = (input - mean) / std
```
2. System environment

   In Vitis-AI docker, default environment of vitis-ai-pytorch conda is pytorch 1.7.1. 
   The pytorch 1.4 environment can be created by script /opt/vitis_ai/scripts/replace_pytorch.sh. 
   It could clone a conda environment from vitis-ai-pytorch, uninstall original PyTorch, torchvision and vai_q_pytorch packages and install the specified version of PyTorch, torchvision, and re-install vai_q_pytorch from source code. 

