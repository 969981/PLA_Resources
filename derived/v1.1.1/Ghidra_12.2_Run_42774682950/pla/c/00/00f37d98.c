/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f37d98; name: FUN_00f37d98
 */


void FUN_00f37d98(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((DAT_043b4c18 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00f37b4c();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar1 = FUN_00150ba0(param_1,3,0);
  *(undefined4 *)(lVar3 + *param_2) = uVar1;
  FUN_0014ff10(param_1,0);
  return;
}


