/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fec2cc; name: FUN_00fec2cc
 */


void FUN_00fec2cc(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((DAT_043b8088 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00fec1f8();
    lVar3 = (*pcVar4)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  cVar1 = *(char *)(lVar3 + 0x80);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,cVar1 != '\0');
  return;
}


