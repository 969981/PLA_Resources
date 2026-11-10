/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017246a4; name: FUN_017246a4
 */


undefined8 FUN_017246a4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437be00 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00dfa180();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar4 = *(code **)(lVar2 + 0x80);
  if ((*(ulong *)(lVar2 + 0x88) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x88) >> 1)));
  }
  (*pcVar4)();
  FUN_0014ff10(param_1,0);
  return 0;
}


