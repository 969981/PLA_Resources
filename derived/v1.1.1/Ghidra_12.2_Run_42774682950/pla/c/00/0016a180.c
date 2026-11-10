/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a180; name: FUN_0016a180
 */


void FUN_0016a180(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  iVar7 = *(int *)(param_1 + 0x10);
  auVar12 = FUN_0016a190();
  lVar2 = auVar12._0_8_;
  uVar3 = FUN_00159d60(*(undefined8 *)(lVar2 + 0x38),auVar12._8_8_,*(undefined8 *)(lVar2 + 0x60),
                       *(undefined4 *)(lVar2 + 4));
  if (iVar7 == 0) goto LAB_0016a2bc;
  uVar10 = *(undefined8 *)(lVar2 + 0x38);
  if (iVar7 - 0x122U < 4) {
    plVar11 = *(long **)(lVar2 + 0x48);
    lVar8 = plVar11[1];
    uVar1 = plVar11[2];
    uVar9 = lVar8 + 1;
    if (uVar1 < uVar9) {
      if (0x3ffffffffffffffe < uVar1) {
        FUN_0016a190(lVar2,"lexical element too long",0);
        goto LAB_0016a208;
      }
      lVar5 = FUN_00161510(uVar10,*plVar11,uVar1,uVar1 << 1);
      lVar8 = plVar11[1];
      uVar9 = lVar8 + 1;
      *plVar11 = lVar5;
      plVar11[2] = uVar1 << 1;
    }
    else {
      lVar5 = *plVar11;
    }
    plVar11[1] = uVar9;
    *(undefined1 *)(lVar5 + lVar8) = 0;
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = **(undefined8 **)(lVar2 + 0x48);
LAB_0016a2a0:
    uVar4 = FUN_00162fa0(uVar6,&DAT_038ee351,uVar4);
  }
  else {
LAB_0016a208:
    if (iVar7 < 0x101) {
      uVar4 = FUN_00162fa0(uVar10,&DAT_038ee34c,iVar7);
    }
    else {
      uVar4 = *(undefined8 *)(&DAT_0411a2b0 + (long)iVar7 * 8);
      if (iVar7 < 0x121) {
        uVar6 = uVar10;
        goto LAB_0016a2a0;
      }
    }
  }
  FUN_00162fa0(uVar10,"%s near %s",uVar3,uVar4);
LAB_0016a2bc:
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(*(undefined8 *)(lVar2 + 0x38),3);
}


