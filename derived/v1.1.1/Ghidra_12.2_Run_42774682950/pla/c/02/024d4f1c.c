/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024d4f1c; name: FUN_024d4f1c
 */


void FUN_024d4f1c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_b0 [128];
  
  lVar5 = FUN_001511d0(param_1,1);
  lVar5 = *(long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  if ((DAT_043e7d18 != '\0') && (iVar4 = FUN_00155630(param_1,1,"class_cast"), iVar4 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_024d3d88();
    lVar5 = (*pcVar6)(lVar5,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  puVar8 = (undefined8 *)FUN_024cb418(param_1,3,auStack_b0 + 0x88);
  puVar1 = (undefined8 *)(lVar5 + *param_2);
  uVar3 = *(undefined4 *)(puVar8 + 3);
  uVar7 = puVar8[1];
  uVar2 = puVar8[2];
  *puVar1 = *puVar8;
  puVar1[1] = uVar7;
  puVar1[2] = uVar2;
  *(undefined4 *)(puVar1 + 3) = uVar3;
  FUN_0014ff10(param_1,0);
  return;
}


