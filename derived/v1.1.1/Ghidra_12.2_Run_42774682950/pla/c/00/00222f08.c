/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00222f08; name: FUN_00222f08
 */


/* WARNING: Removing unreachable block (ram,0x0022321c) */

int FUN_00222f08(long param_1,uint param_2,uint param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_68 [4];
  int local_64;
  uint local_58;
  uint local_54;
  
  if (param_2 == 0) {
    uVar2 = FUN_00221cb4(param_1,&local_54,param_5,param_3);
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = (ulong)local_54, *(char *)(*(long *)(param_1 + 0x1c08) + uVar2) == '\0')) &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar2) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x1bd8))();
        uVar3 = uVar3 & 0xffffffff;
      }
      FUN_00222e2c(param_1,uVar2,uVar3);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar4 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar2 * 8);
      if (lVar4 != 0) {
        fVar5 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar2 * 0x1c + 0x10);
        iVar1 = nn::fontll::ScalableFontEngine::AcquireOtfKerningFirst
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),(uint)lVar4
                           ,param_3);
LAB_00223148:
        return (int)(fVar5 * (float)iVar1);
      }
    }
  }
  else if (param_3 == 0) {
    uVar2 = FUN_00221cb4(param_1,&local_54,param_5,param_2);
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = (ulong)local_54, *(char *)(*(long *)(param_1 + 0x1c08) + uVar2) == '\0')) &&
       (*(char *)(*(long *)(param_1 + 0x1c18) + uVar2) == '\0')) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x1bd8))();
        uVar3 = uVar3 & 0xffffffff;
      }
      FUN_00222e2c(param_1,uVar2,uVar3);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar4 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar2 * 8);
      if (lVar4 != 0) {
        fVar5 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar2 * 0x1c + 0x10);
        iVar1 = nn::fontll::ScalableFontEngine::AcquireOtfKerningLast
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),(uint)lVar4
                           ,param_2);
        goto LAB_00223148;
      }
    }
  }
  else {
    uVar2 = FUN_00221cb4(param_1,&local_54,param_5,param_2);
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = FUN_00221cb4(param_1,&local_58,param_5,param_3), (uVar2 & 1) != 0)) &&
       ((uVar2 = (ulong)local_54, local_54 == local_58 &&
        ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar2) == '\0' &&
         (*(char *)(*(long *)(param_1 + 0x1c18) + uVar2) == '\0')))))) {
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x1bd8))();
        uVar3 = uVar3 & 0xffffffff;
      }
      FUN_00222e2c(param_1,local_54,uVar3);
      nn::fontll::ScalableFontEngine::SetScale
                ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_4 << 0x10,0,0);
      nn::fontll::ScalableFontEngine::GetError();
      lVar4 = *(long *)(*(long *)(param_1 + 0x1c48) + uVar2 * 8);
      if ((lVar4 != 0) &&
         (iVar1 = nn::fontll::ScalableFontEngine::AcquireOtfKerning
                            ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),
                             (uint)lVar4,param_2,param_3), iVar1 != 0)) {
        return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar2 * 0x1c + 0x10) * (float)iVar1);
      }
      iVar1 = nn::fontll::ScalableFontEngine::GetKerning
                        ((int *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),&local_64,
                         (uint)auStack_68,param_2);
      if (iVar1 == 0) {
        return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar2 * 0x1c + 0x10) * (float)local_64
                    ) >> 0x10;
      }
    }
  }
  return 0;
}


