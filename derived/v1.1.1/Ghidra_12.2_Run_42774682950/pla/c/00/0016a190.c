/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a190; name: FUN_0016a190
 */


void FUN_0016a190(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  uVar2 = FUN_00159d60(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 4));
  if (param_3 == 0) goto LAB_0016a2bc;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (param_3 - 0x122U < 4) {
    plVar9 = *(long **)(param_1 + 0x48);
    lVar6 = plVar9[1];
    uVar1 = plVar9[2];
    uVar7 = lVar6 + 1;
    if (uVar1 < uVar7) {
      if (0x3ffffffffffffffe < uVar1) {
        FUN_0016a190(param_1,"lexical element too long",0);
        goto LAB_0016a208;
      }
      lVar4 = FUN_00161510(uVar8,*plVar9,uVar1,uVar1 << 1);
      lVar6 = plVar9[1];
      uVar7 = lVar6 + 1;
      *plVar9 = lVar4;
      plVar9[2] = uVar1 << 1;
    }
    else {
      lVar4 = *plVar9;
    }
    plVar9[1] = uVar7;
    *(undefined1 *)(lVar4 + lVar6) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = **(undefined8 **)(param_1 + 0x48);
LAB_0016a2a0:
    uVar3 = FUN_00162fa0(uVar5,&DAT_038ee351,uVar3);
  }
  else {
LAB_0016a208:
    if (param_3 < 0x101) {
      uVar3 = FUN_00162fa0(uVar8,&DAT_038ee34c,param_3);
    }
    else {
      uVar3 = *(undefined8 *)(&DAT_0411a2b0 + (long)param_3 * 8);
      if (param_3 < 0x121) {
        uVar5 = uVar8;
        goto LAB_0016a2a0;
      }
    }
  }
  FUN_00162fa0(uVar8,"%s near %s",uVar2,uVar3);
LAB_0016a2bc:
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(*(undefined8 *)(param_1 + 0x38),3);
}


