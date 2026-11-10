/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02129d74; name: FUN_02129d74
 */


void FUN_02129d74(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04384fc8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_0212976c();
    lVar3 = (*pcVar5)(lVar3,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = *(code **)(lVar2 + 0xb0);
  if ((*(ulong *)(lVar2 + 0xb8) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0xb8) >> 1)));
  }
  iVar1 = (*pcVar5)();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


