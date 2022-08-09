# GENETARED BY NNDCT, DO NOT EDIT!

import torch
import pytorch_nndct as py_nndct
class FPN(torch.nn.Module):
    def __init__(self):
        super(FPN, self).__init__()
        self.module_0 = py_nndct.nn.Input() #FPN::input_0
        self.module_1 = py_nndct.nn.Conv2d(in_channels=3, out_channels=64, kernel_size=[7, 7], stride=[2, 2], padding=[3, 3], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Conv2d/input.2
        self.module_3 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/ReLU/222
        self.module_4 = py_nndct.nn.MaxPool2d(kernel_size=[3, 3], stride=[2, 2], padding=[1, 1], dilation=[1, 1], ceil_mode=False) #FPN::FPN/MaxPool2d/input.4
        self.module_5 = py_nndct.nn.Conv2d(in_channels=64, out_channels=64, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv1]/input.5
        self.module_7 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.7
        self.module_8 = py_nndct.nn.Conv2d(in_channels=64, out_channels=64, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv2]/input.8
        self.module_10 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[0]/input.9
        self.module_11 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.10
        self.module_12 = py_nndct.nn.Conv2d(in_channels=64, out_channels=64, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv1]/input.11
        self.module_14 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.13
        self.module_15 = py_nndct.nn.Conv2d(in_channels=64, out_channels=64, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv2]/input.14
        self.module_17 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[1]/input.15
        self.module_18 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.16
        self.module_19 = py_nndct.nn.Conv2d(in_channels=64, out_channels=128, kernel_size=[3, 3], stride=[2, 2], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv1]/input.17
        self.module_21 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.19
        self.module_22 = py_nndct.nn.Conv2d(in_channels=128, out_channels=128, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv2]/input.20
        self.module_24 = py_nndct.nn.Conv2d(in_channels=64, out_channels=128, kernel_size=[1, 1], stride=[2, 2], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Sequential[downsample]/Conv2d[0]/input.21
        self.module_26 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[0]/input.22
        self.module_27 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.23
        self.module_28 = py_nndct.nn.Conv2d(in_channels=128, out_channels=128, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv1]/input.24
        self.module_30 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.26
        self.module_31 = py_nndct.nn.Conv2d(in_channels=128, out_channels=128, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv2]/input.27
        self.module_33 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[1]/input.28
        self.module_34 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.29
        self.module_35 = py_nndct.nn.Conv2d(in_channels=128, out_channels=256, kernel_size=[3, 3], stride=[2, 2], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv1]/input.30
        self.module_37 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.32
        self.module_38 = py_nndct.nn.Conv2d(in_channels=256, out_channels=256, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv2]/input.33
        self.module_40 = py_nndct.nn.Conv2d(in_channels=128, out_channels=256, kernel_size=[1, 1], stride=[2, 2], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Sequential[downsample]/Conv2d[0]/input.34
        self.module_42 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[0]/input.35
        self.module_43 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.36
        self.module_44 = py_nndct.nn.Conv2d(in_channels=256, out_channels=256, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv1]/input.37
        self.module_46 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.39
        self.module_47 = py_nndct.nn.Conv2d(in_channels=256, out_channels=256, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv2]/input.40
        self.module_49 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[1]/input.41
        self.module_50 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.42
        self.module_51 = py_nndct.nn.Conv2d(in_channels=256, out_channels=512, kernel_size=[3, 3], stride=[2, 2], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv1]/input.43
        self.module_53 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.45
        self.module_54 = py_nndct.nn.Conv2d(in_channels=512, out_channels=512, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Conv2d[conv2]/input.46
        self.module_56 = py_nndct.nn.Conv2d(in_channels=256, out_channels=512, kernel_size=[1, 1], stride=[2, 2], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[0]/Sequential[downsample]/Conv2d[0]/input.47
        self.module_58 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[0]/input.48
        self.module_59 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[0]/ReLU[relu]/input.49
        self.module_60 = py_nndct.nn.Conv2d(in_channels=512, out_channels=512, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv1]/input.50
        self.module_62 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.52
        self.module_63 = py_nndct.nn.Conv2d(in_channels=512, out_channels=512, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/Sequential/BasicBlock[1]/Conv2d[conv2]/input.53
        self.module_65 = py_nndct.nn.Add() #FPN::FPN/Sequential/BasicBlock[1]/input.54
        self.module_66 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/Sequential/BasicBlock[1]/ReLU[relu]/input.55
        self.module_67 = py_nndct.nn.Conv2d(in_channels=512, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/Conv2d[conv_enc2dec]/input.56
        self.module_69 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/ReLU[relu_enc2dec]/581
        self.module_70 = py_nndct.nn.ConvTranspose2d(in_channels=19, out_channels=19, kernel_size=[2, 2], stride=[2, 2], padding=[0, 0], output_padding=[0, 0], groups=1, bias=False, dilation=[1, 1]) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/ConvTranspose2d[conv_up]/592
        self.module_71 = py_nndct.nn.Conv2d(in_channels=256, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/Conv2d[conv1]/input.58
        self.module_73 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/ReLU[relu]/input.60
        self.module_74 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/Conv2d[conv2]/input.61
        self.module_76 = py_nndct.nn.Conv2d(in_channels=256, out_channels=19, kernel_size=[1, 1], stride=[1, 1], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/Sequential[downsample]/Conv2d[0]/input.62
        self.module_78 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/input.63
        self.module_79 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/BasicBlock[conv_enc]/ReLU[relu]/644
        self.module_80 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/input.64
        self.module_81 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/SemiBasicBlock[conv_out]/Conv2d[conv1]/input.65
        self.module_83 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/SemiBasicBlock[conv_out]/input.66
        self.module_84 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up3]/SemiBasicBlock[conv_out]/ReLU[relu]/665
        self.module_85 = py_nndct.nn.ConvTranspose2d(in_channels=19, out_channels=19, kernel_size=[2, 2], stride=[2, 2], padding=[0, 0], output_padding=[0, 0], groups=1, bias=False, dilation=[1, 1]) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/ConvTranspose2d[conv_up]/676
        self.module_86 = py_nndct.nn.Conv2d(in_channels=128, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/Conv2d[conv1]/input.67
        self.module_88 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/ReLU[relu]/input.69
        self.module_89 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/Conv2d[conv2]/input.70
        self.module_91 = py_nndct.nn.Conv2d(in_channels=128, out_channels=19, kernel_size=[1, 1], stride=[1, 1], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/Sequential[downsample]/Conv2d[0]/input.71
        self.module_93 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/input.72
        self.module_94 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/BasicBlock[conv_enc]/ReLU[relu]/728
        self.module_95 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/input.73
        self.module_96 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/SemiBasicBlock[conv_out]/Conv2d[conv1]/input.74
        self.module_98 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/SemiBasicBlock[conv_out]/input.75
        self.module_99 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up2]/SemiBasicBlock[conv_out]/ReLU[relu]/749
        self.module_100 = py_nndct.nn.ConvTranspose2d(in_channels=19, out_channels=19, kernel_size=[2, 2], stride=[2, 2], padding=[0, 0], output_padding=[0, 0], groups=1, bias=False, dilation=[1, 1]) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/ConvTranspose2d[conv_up]/760
        self.module_101 = py_nndct.nn.Conv2d(in_channels=64, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/Conv2d[conv1]/input.76
        self.module_103 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/ReLU[relu]/input.78
        self.module_104 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/Conv2d[conv2]/input.79
        self.module_106 = py_nndct.nn.Conv2d(in_channels=64, out_channels=19, kernel_size=[1, 1], stride=[1, 1], padding=[0, 0], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/Sequential[downsample]/Conv2d[0]/input.80
        self.module_108 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/input.81
        self.module_109 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/BasicBlock[conv_enc]/ReLU[relu]/812
        self.module_110 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/input.82
        self.module_111 = py_nndct.nn.Conv2d(in_channels=19, out_channels=19, kernel_size=[3, 3], stride=[1, 1], padding=[1, 1], dilation=[1, 1], groups=1, bias=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/SemiBasicBlock[conv_out]/Conv2d[conv1]/input.83
        self.module_113 = py_nndct.nn.Add() #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/SemiBasicBlock[conv_out]/input
        self.module_114 = py_nndct.nn.ReLU(inplace=True) #FPN::FPN/FPNHead[head]/UpsampleModule[up1]/SemiBasicBlock[conv_out]/ReLU[relu]/833
        self.module_115 = py_nndct.nn.ConvTranspose2d(in_channels=19, out_channels=19, kernel_size=[2, 2], stride=[2, 2], padding=[0, 0], output_padding=[0, 0], groups=1, bias=False, dilation=[1, 1]) #FPN::FPN/FPNHead[head]/ConvTranspose2d[conv_up0]/844
        self.module_116 = py_nndct.nn.ConvTranspose2d(in_channels=19, out_channels=19, kernel_size=[2, 2], stride=[2, 2], padding=[0, 0], output_padding=[0, 0], groups=1, bias=False, dilation=[1, 1]) #FPN::FPN/FPNHead[head]/ConvTranspose2d[conv_up1]/855

    def forward(self, *args):
        self.output_module_0 = self.module_0(input=args[0])
        self.output_module_1 = self.module_1(self.output_module_0)
        self.output_module_3 = self.module_3(self.output_module_1)
        self.output_module_4 = self.module_4(self.output_module_3)
        self.output_module_5 = self.module_5(self.output_module_4)
        self.output_module_7 = self.module_7(self.output_module_5)
        self.output_module_8 = self.module_8(self.output_module_7)
        self.output_module_10 = self.module_10(input=self.output_module_8, other=self.output_module_4, alpha=1)
        self.output_module_11 = self.module_11(self.output_module_10)
        self.output_module_12 = self.module_12(self.output_module_11)
        self.output_module_14 = self.module_14(self.output_module_12)
        self.output_module_15 = self.module_15(self.output_module_14)
        self.output_module_17 = self.module_17(input=self.output_module_15, other=self.output_module_11, alpha=1)
        self.output_module_18 = self.module_18(self.output_module_17)
        self.output_module_19 = self.module_19(self.output_module_18)
        self.output_module_21 = self.module_21(self.output_module_19)
        self.output_module_22 = self.module_22(self.output_module_21)
        self.output_module_24 = self.module_24(self.output_module_18)
        self.output_module_26 = self.module_26(input=self.output_module_22, other=self.output_module_24, alpha=1)
        self.output_module_27 = self.module_27(self.output_module_26)
        self.output_module_28 = self.module_28(self.output_module_27)
        self.output_module_30 = self.module_30(self.output_module_28)
        self.output_module_31 = self.module_31(self.output_module_30)
        self.output_module_33 = self.module_33(input=self.output_module_31, other=self.output_module_27, alpha=1)
        self.output_module_34 = self.module_34(self.output_module_33)
        self.output_module_35 = self.module_35(self.output_module_34)
        self.output_module_37 = self.module_37(self.output_module_35)
        self.output_module_38 = self.module_38(self.output_module_37)
        self.output_module_40 = self.module_40(self.output_module_34)
        self.output_module_42 = self.module_42(input=self.output_module_38, other=self.output_module_40, alpha=1)
        self.output_module_43 = self.module_43(self.output_module_42)
        self.output_module_44 = self.module_44(self.output_module_43)
        self.output_module_46 = self.module_46(self.output_module_44)
        self.output_module_47 = self.module_47(self.output_module_46)
        self.output_module_49 = self.module_49(input=self.output_module_47, other=self.output_module_43, alpha=1)
        self.output_module_50 = self.module_50(self.output_module_49)
        self.output_module_51 = self.module_51(self.output_module_50)
        self.output_module_53 = self.module_53(self.output_module_51)
        self.output_module_54 = self.module_54(self.output_module_53)
        self.output_module_56 = self.module_56(self.output_module_50)
        self.output_module_58 = self.module_58(input=self.output_module_54, other=self.output_module_56, alpha=1)
        self.output_module_59 = self.module_59(self.output_module_58)
        self.output_module_60 = self.module_60(self.output_module_59)
        self.output_module_62 = self.module_62(self.output_module_60)
        self.output_module_63 = self.module_63(self.output_module_62)
        self.output_module_65 = self.module_65(input=self.output_module_63, other=self.output_module_59, alpha=1)
        self.output_module_66 = self.module_66(self.output_module_65)
        self.output_module_67 = self.module_67(self.output_module_66)
        self.output_module_69 = self.module_69(self.output_module_67)
        self.output_module_70 = self.module_70(self.output_module_69)
        self.output_module_71 = self.module_71(self.output_module_50)
        self.output_module_73 = self.module_73(self.output_module_71)
        self.output_module_74 = self.module_74(self.output_module_73)
        self.output_module_76 = self.module_76(self.output_module_50)
        self.output_module_78 = self.module_78(input=self.output_module_74, other=self.output_module_76, alpha=1)
        self.output_module_79 = self.module_79(self.output_module_78)
        self.output_module_80 = self.module_80(input=self.output_module_70, other=self.output_module_79, alpha=1)
        self.output_module_81 = self.module_81(self.output_module_80)
        self.output_module_83 = self.module_83(input=self.output_module_81, other=self.output_module_80, alpha=1)
        self.output_module_84 = self.module_84(self.output_module_83)
        self.output_module_85 = self.module_85(self.output_module_84)
        self.output_module_86 = self.module_86(self.output_module_34)
        self.output_module_88 = self.module_88(self.output_module_86)
        self.output_module_89 = self.module_89(self.output_module_88)
        self.output_module_91 = self.module_91(self.output_module_34)
        self.output_module_93 = self.module_93(input=self.output_module_89, other=self.output_module_91, alpha=1)
        self.output_module_94 = self.module_94(self.output_module_93)
        self.output_module_95 = self.module_95(input=self.output_module_85, other=self.output_module_94, alpha=1)
        self.output_module_96 = self.module_96(self.output_module_95)
        self.output_module_98 = self.module_98(input=self.output_module_96, other=self.output_module_95, alpha=1)
        self.output_module_99 = self.module_99(self.output_module_98)
        self.output_module_100 = self.module_100(self.output_module_99)
        self.output_module_101 = self.module_101(self.output_module_18)
        self.output_module_103 = self.module_103(self.output_module_101)
        self.output_module_104 = self.module_104(self.output_module_103)
        self.output_module_106 = self.module_106(self.output_module_18)
        self.output_module_108 = self.module_108(input=self.output_module_104, other=self.output_module_106, alpha=1)
        self.output_module_109 = self.module_109(self.output_module_108)
        self.output_module_110 = self.module_110(input=self.output_module_100, other=self.output_module_109, alpha=1)
        self.output_module_111 = self.module_111(self.output_module_110)
        self.output_module_113 = self.module_113(input=self.output_module_111, other=self.output_module_110, alpha=1)
        self.output_module_114 = self.module_114(self.output_module_113)
        self.output_module_115 = self.module_115(self.output_module_114)
        self.output_module_116 = self.module_116(self.output_module_115)
        return self.output_module_116
