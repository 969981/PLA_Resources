/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0212996c; name: FUN_0212996c
 */


void FUN_0212996c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04384fc8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_0212976c();
    lVar2 = (*pcVar5)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  __s = (char *)(*pcVar5)();
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
    return;
  }
  sVar3 = strlen(__s);
  FUN_001514f0(param_1,__s,sVar3);
  return;
}


