/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017a5c28; name: FUN_017a5c28
 */


undefined8 FUN_017a5c28(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_00150310();
  if (iVar1 == 0) {
    *param_3 = 1;
    uVar3 = 0;
    param_3[1] = param_3[1] + 1;
  }
  else {
    lVar2 = FUN_001511d0(param_1,param_2);
    *param_3 = 1;
    param_3[1] = param_3[1] + 1;
    uVar3 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
    if ((*PTR_DAT_043811b8 != '\0') &&
       (iVar1 = FUN_00155630(param_1,param_2,"class_cast"), iVar1 != 0)) {
      pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
      uVar5 = FUN_017a5d10();
      uVar3 = (*pcVar4)(uVar3,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
    }
  }
  return uVar3;
}


