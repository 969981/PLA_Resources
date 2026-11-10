/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0101f6ac; name: FUN_0101f6ac
 */


void FUN_0101f6ac(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_b0 [128];
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437ab20 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00b3c2cc();
    uVar6 = (*pcVar4)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  fVar7 = (float)FUN_0101f5b8(param_1,auStack_b0 + 0x88,lVar2 + 0x158,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar7,param_1);
  return;
}


