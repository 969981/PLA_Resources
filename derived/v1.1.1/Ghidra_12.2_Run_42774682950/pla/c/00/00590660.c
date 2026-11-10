/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00590660; name: FUN_00590660
 */


undefined8 FUN_00590660(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_24 [4];
  
  local_24[0] = 1;
  lVar2 = FUN_0046e390();
  if (lVar2 != 0) {
    uVar3 = FUN_0044f850();
    iVar1 = FUN_0046dda0(lVar2,param_2,0x20,uVar3,0);
    if ((((iVar1 != 0) && (iVar1 = FUN_0046e2b0(lVar2,param_3,6), iVar1 != 0)) &&
        (iVar1 = FUN_0046e2b0(lVar2,local_24,1), iVar1 != 0)) &&
       (iVar1 = FUN_0046e2d0(lVar2,&local_70,0), iVar1 != 0)) {
      FUN_0046e430(lVar2);
      param_1[1] = uStack_68;
      *param_1 = local_70;
      return 0;
    }
    FUN_0046e430(lVar2);
  }
  return 0xd;
}


