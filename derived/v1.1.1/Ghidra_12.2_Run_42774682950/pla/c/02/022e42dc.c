/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022e42dc; name: FUN_022e42dc
 */


undefined8 FUN_022e42dc(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_00150310(param_1,2);
  if (iVar1 == 0) {
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    return 0;
  }
  lVar2 = FUN_001511d0(param_1,2);
  *param_2 = 1;
  param_2[1] = param_2[1] + 1;
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((DAT_043e1408 != '\0') && (iVar1 = FUN_00155630(param_1,2,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_022e43fc();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  return uVar5;
}


