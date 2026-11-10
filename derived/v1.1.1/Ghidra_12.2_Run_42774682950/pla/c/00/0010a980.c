/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010a980; name: FUN_0010a980
 */


int FUN_0010a980(byte *param_1,byte *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 0x10 <= param_2) {
    param_2 = param_1 + 0x10;
  }
  FUN_0010a1f0(param_3,0x20);
  pbVar3 = param_1 + 2;
  if (param_2 < pbVar3) {
    return -1;
  }
  bVar2 = *param_1;
  uVar1 = (uint)param_1[1] | (bVar2 & 0x3f) << 8;
  if (uVar1 == 0x3fff) {
    bVar2 = bVar2 >> 6;
    if (bVar2 != 2) {
      if (bVar2 == 1) {
        if (param_2 < param_1 + 3) {
          return -1;
        }
        bVar2 = *pbVar3;
        *param_3 = 0;
        param_3[1] = (uint)bVar2;
        pbVar3 = param_1 + 3;
      }
      else {
        if (bVar2 != 0) {
          FUN_0010a430();
          if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
            (**(code **)PTR_PTR_043722f8)
                      (0,"v:\\devel\\projects\\oodle2\\core\\rrlzh_lzhlw_shared.cpp",0x29f,
                       "OODLE ERROR : invalid QH ; unused special value\n");
          }
          FUN_0010a450();
          return -1;
        }
        param_3[2] = 1;
        plVar5 = (long *)(param_3 + 4);
        *param_3 = 0;
        pbVar3 = (byte *)FUN_0010e590(pbVar3,param_2,plVar5,0xf,7);
        if (pbVar3 == (byte *)0x0) {
          return -1;
        }
        lVar4 = *plVar5;
        *plVar5 = lVar4 + 1;
        if (lVar4 + 1 < 2) {
          return -1;
        }
      }
      goto LAB_0010aaac;
    }
    *param_3 = param_5;
  }
  else {
    *param_3 = uVar1 + 1;
    param_3[6] = bVar2 >> 6 & 1;
    param_3[7] = (uint)(bVar2 >> 7);
  }
  if (param_4 != 0) {
    pbVar3 = param_1 + 5;
    if (param_2 < pbVar3) {
      return -1;
    }
    bVar2 = param_1[2];
    param_3[1] = (uint)bVar2 << 0x10;
    uVar1 = (uint)bVar2 << 0x10 | (uint)param_1[3] << 8;
    param_3[1] = uVar1;
    param_3[1] = uVar1 | param_1[4];
  }
LAB_0010aaac:
  return (int)pbVar3 - (int)param_1;
}


