/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0340; name: FUN_004e0340
 */


undefined8 FUN_004e0340(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = FUN_00407970(param_2,0);
  }
  uVar4 = (uint)bVar1;
  uVar3 = FUN_004e0190(param_1,0,param_3,param_4,1);
  if ((int)uVar3 == 1) {
    iVar2 = FUN_00407950(param_2);
    if (iVar2 <= (int)(uint)bVar1) {
      return 1;
    }
    do {
      uVar3 = FUN_00407970(param_2,uVar4);
      uVar3 = FUN_004e0190(param_1,0,uVar3,param_4,0);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
      iVar2 = FUN_00407950(param_2);
    } while ((int)uVar4 < iVar2);
    uVar3 = 1;
  }
  return uVar3;
}


