/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031605fc; name: FUN_031605fc
 */


uint FUN_031605fc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 local_58;
  
  lVar3 = nn::os::GetSystemTick();
  lVar4 = nn::os::GetSystemTick();
  fVar6 = *(float *)(param_1 + 0x3c);
  if (*(float *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) +
      *(float *)(param_1 + 0x40) < fVar6) {
    local_58 = CONCAT44(fVar6,fVar6);
    iVar1 = FUN_031726d0(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                         param_4,param_5,param_6,param_7,param_1,&local_58,param_1 + 0x80);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_031606d0;
    }
  }
  uVar2 = FUN_03160734(param_1,param_3,param_4,param_5,param_6);
LAB_031606d0:
  lVar5 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x70) = (lVar5 - lVar4) + *(long *)(param_1 + 0x70);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  lVar4 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x58) = (lVar4 - lVar3) + *(long *)(param_1 + 0x58);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return uVar2 & 1;
}


