/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02090c84; name: FUN_02090c84
 */


void FUN_02090c84(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_043811b8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_017a5d10();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_020909b0(param_1,lVar2 + 0x400,uVar6);
  return;
}


