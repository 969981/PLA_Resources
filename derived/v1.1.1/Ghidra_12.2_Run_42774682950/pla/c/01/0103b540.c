/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0103b540; name: FUN_0103b540
 */


void FUN_0103b540(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [128];
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437d560 != '\0') && (iVar2 = FUN_00155630(param_1,1,"class_cast"), iVar2 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_00f2db5c();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar1 = FUN_0103b4d0(param_1,auStack_b0 + 0x88,lVar3 + 200,uVar7);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


