# Copyright 2019 Xilinx Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

DATASET=data/cityscapes
WEIGHTS=float
GPU_ID=0

export PYTHONPATH=${PWD}:${PYTHONPATH}
export W_QUANT=0

echo "====> perform SemanticFPN(ResNet18) with input_size = 256x512..."
CUDA_VISIBLE_DEVICES=${GPU_ID} python code/test/test.py --eval --dataset citys --model fpn --backbone resnet18 --crop-size 256 --data-folder ${DATASET} --weight ${WEIGHTS}/fpn_res18/final_best.pth.tar  --quant_mode float

echo "Test finishes!"