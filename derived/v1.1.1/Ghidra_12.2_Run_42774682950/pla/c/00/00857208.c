/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00857208; name: FUN_00857208
 */


void FUN_00857208(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  
  plVar5 = (long *)PTR_DAT_043773c0;
  if ((*(char *)(param_2 + 8) == '\0') ||
     (lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0), lVar3 == 0)) {
    local_80 = CONCAT44(local_80._4_4_,0x10408);
    local_90[0] = local_90[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_80 | 4),(Result *)local_90);
    puVar7 = &local_80;
    goto LAB_008575d8;
  }
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar11 = *(long *)(lVar3 + 0x20);
  if (lVar11 == lVar3 + 0x18) {
LAB_00857474:
    *(undefined1 *)(param_2 + 0x647c) = 0;
    if (local_80._1_1_ != '\0') goto LAB_008573b4;
LAB_00857480:
    *(undefined1 *)(param_2 + 0x64ac) = 0;
    if (local_80._2_1_ == '\0') goto LAB_0085748c;
LAB_008573bc:
    if (local_80._3_1_ != '\0') goto LAB_008573c4;
LAB_00857498:
    *(undefined1 *)(param_2 + 0x650c) = 0;
    if (local_80._4_1_ == '\0') goto LAB_008574a4;
LAB_008573cc:
    if (local_80._5_1_ != '\0') goto LAB_008573d4;
LAB_008574b0:
    *(undefined1 *)(param_2 + 0x656c) = 0;
    if (local_80._6_1_ == '\0') goto LAB_008574bc;
LAB_008573dc:
    if (local_80._7_1_ != '\0') goto LAB_008573e4;
LAB_008574c8:
    *(undefined1 *)(param_2 + 0x65cc) = 0;
    if ((char)local_78 == '\0') goto LAB_008574d4;
LAB_008573ec:
    if (local_78._1_1_ != '\0') goto LAB_008573f4;
LAB_008574e0:
    *(undefined1 *)(param_2 + 0x662c) = 0;
    if (local_78._2_1_ == '\0') goto LAB_008574ec;
LAB_008573fc:
    if (local_78._3_1_ != '\0') goto LAB_00857404;
LAB_008574f8:
    *(undefined1 *)(param_2 + 0x668c) = 0;
    if (local_78._4_1_ == '\0') goto LAB_00857504;
LAB_0085740c:
    if (local_78._5_1_ != '\0') goto LAB_00857414;
LAB_00857510:
    *(undefined1 *)(param_2 + 0x66ec) = 0;
    if (local_78._6_1_ == '\0') goto LAB_0085751c;
LAB_0085741c:
    if (local_78._7_1_ != '\0') goto LAB_00857424;
LAB_00857528:
    *(undefined1 *)(param_2 + 0x674c) = 0;
    if ((char)local_70 == '\0') goto LAB_00857534;
LAB_0085742c:
    if (local_70._1_1_ != '\0') goto LAB_00857434;
LAB_00857540:
    *(undefined1 *)(param_2 + 0x67ac) = 0;
    if (local_70._2_1_ == '\0') goto LAB_0085754c;
LAB_0085743c:
    if (local_70._3_1_ != '\0') goto LAB_00857444;
LAB_00857558:
    *(undefined1 *)(param_2 + 0x680c) = 0;
    if (local_70._4_1_ == '\0') goto LAB_00857564;
LAB_0085744c:
    if (local_70._5_1_ != '\0') goto LAB_00857454;
LAB_00857570:
    *(undefined1 *)(param_2 + 0x686c) = 0;
    if (local_70._6_1_ == '\0') goto LAB_0085757c;
LAB_0085745c:
    if (local_70._7_1_ != '\0') goto LAB_00857464;
LAB_00857588:
    *(undefined1 *)(param_2 + 0x68cc) = 0;
    puVar7 = (ulong *)*plVar5;
    if (puVar7 == (ulong *)0x0) goto LAB_00857594;
LAB_0085746c:
    uVar10 = *puVar7;
  }
  else {
    lVar12 = *(long *)(lVar3 + 0x98);
    lVar4 = *(long *)(lVar11 + 0x10);
    while( true ) {
      if ((lVar12 != lVar4) && (uVar10 = (ulong)*(byte *)(lVar4 + 0x28), uVar10 < 0x18)) {
        *(undefined1 *)((long)local_90 + uVar10 + 0x10) = 1;
        uVar2 = FUN_00850bcc();
        lVar4 = param_2 + uVar10 * 0x30;
        *(undefined4 *)(lVar4 + 0x6450) = uVar2;
        uVar2 = FUN_00850c18(*(undefined8 *)(lVar11 + 0x10));
        *(undefined4 *)(lVar4 + 0x6454) = uVar2;
        uVar2 = FUN_00850c3c(*(undefined8 *)(lVar11 + 0x10));
        *(undefined4 *)(lVar4 + 0x6458) = uVar2;
        lVar6 = *(long *)(lVar11 + 0x10);
        uVar2 = *(undefined4 *)(lVar6 + 0x58);
        uVar1 = *(undefined4 *)(lVar6 + 0x5c);
        puVar9 = (undefined4 *)(lVar4 + 0x6460);
        if (*(char *)(lVar4 + 0x647c) == '\0') {
          *puVar9 = uVar2;
          lVar8 = param_2 + uVar10 * 0x30;
          *(undefined4 *)(lVar8 + 0x6468) = uVar1;
          *(undefined4 *)(lVar8 + 0x645c) = uVar2;
          *(undefined4 *)(lVar8 + 0x6464) = uVar1;
          *(char *)(lVar4 + 0x647c) = '\x01';
        }
        else {
          lVar4 = param_2 + uVar10 * 0x30;
          *(undefined4 *)(lVar4 + 0x645c) = *puVar9;
          *(undefined4 *)(lVar4 + 0x6464) = *(undefined4 *)(lVar4 + 0x6468);
          *puVar9 = uVar2;
          *(undefined4 *)(lVar4 + 0x6468) = uVar1;
        }
        lVar4 = param_2 + uVar10 * 0x30;
        uVar2 = *(undefined4 *)(lVar6 + 0x70);
        uVar1 = *(undefined4 *)(lVar6 + 0x74);
        *(undefined4 *)(lVar4 + 0x646c) = *(undefined4 *)(lVar4 + 0x6470);
        *(undefined4 *)(lVar4 + 0x6474) = *(undefined4 *)(lVar4 + 0x6478);
        *(undefined4 *)(lVar4 + 0x6470) = uVar2;
        *(undefined4 *)(lVar4 + 0x6478) = uVar1;
      }
      lVar11 = *(long *)(lVar11 + 8);
      if (lVar11 == lVar3 + 0x18) break;
      lVar4 = *(long *)(lVar11 + 0x10);
    }
    plVar5 = (long *)PTR_DAT_043773c0;
    if ((char)local_80 == '\0') goto LAB_00857474;
    if (local_80._1_1_ == '\0') goto LAB_00857480;
LAB_008573b4:
    if (local_80._2_1_ != '\0') goto LAB_008573bc;
LAB_0085748c:
    *(undefined1 *)(param_2 + 0x64dc) = 0;
    if (local_80._3_1_ == '\0') goto LAB_00857498;
LAB_008573c4:
    if (local_80._4_1_ != '\0') goto LAB_008573cc;
LAB_008574a4:
    *(undefined1 *)(param_2 + 0x653c) = 0;
    if (local_80._5_1_ == '\0') goto LAB_008574b0;
LAB_008573d4:
    if (local_80._6_1_ != '\0') goto LAB_008573dc;
LAB_008574bc:
    *(undefined1 *)(param_2 + 0x659c) = 0;
    if (local_80._7_1_ == '\0') goto LAB_008574c8;
LAB_008573e4:
    if ((char)local_78 != '\0') goto LAB_008573ec;
LAB_008574d4:
    *(undefined1 *)(param_2 + 0x65fc) = 0;
    if (local_78._1_1_ == '\0') goto LAB_008574e0;
LAB_008573f4:
    if (local_78._2_1_ != '\0') goto LAB_008573fc;
LAB_008574ec:
    *(undefined1 *)(param_2 + 0x665c) = 0;
    if (local_78._3_1_ == '\0') goto LAB_008574f8;
LAB_00857404:
    if (local_78._4_1_ != '\0') goto LAB_0085740c;
LAB_00857504:
    *(undefined1 *)(param_2 + 0x66bc) = 0;
    if (local_78._5_1_ == '\0') goto LAB_00857510;
LAB_00857414:
    if (local_78._6_1_ != '\0') goto LAB_0085741c;
LAB_0085751c:
    *(undefined1 *)(param_2 + 0x671c) = 0;
    if (local_78._7_1_ == '\0') goto LAB_00857528;
LAB_00857424:
    if ((char)local_70 != '\0') goto LAB_0085742c;
LAB_00857534:
    *(undefined1 *)(param_2 + 0x677c) = 0;
    if (local_70._1_1_ == '\0') goto LAB_00857540;
LAB_00857434:
    if (local_70._2_1_ != '\0') goto LAB_0085743c;
LAB_0085754c:
    *(undefined1 *)(param_2 + 0x67dc) = 0;
    if (local_70._3_1_ == '\0') goto LAB_00857558;
LAB_00857444:
    if (local_70._4_1_ != '\0') goto LAB_0085744c;
LAB_00857564:
    *(undefined1 *)(param_2 + 0x683c) = 0;
    if (local_70._5_1_ == '\0') goto LAB_00857570;
LAB_00857454:
    if (local_70._6_1_ != '\0') goto LAB_0085745c;
LAB_0085757c:
    *(undefined1 *)(param_2 + 0x689c) = 0;
    if (local_70._7_1_ == '\0') goto LAB_00857588;
LAB_00857464:
    puVar7 = (ulong *)*plVar5;
    if (puVar7 != (ulong *)0x0) goto LAB_0085746c;
LAB_00857594:
    local_90[0] = 0;
    FUN_007ecf14(local_90);
    uVar10 = local_90[0];
  }
  lVar3 = *(long *)(param_2 + 0x68e0);
  plVar5 = (long *)FUN_007ecfa4();
  uVar2 = 0;
  if (*plVar5 != 0) {
    uVar2 = (undefined4)((long)(uVar10 - lVar3) / *plVar5);
  }
  *(undefined4 *)(param_2 + 0x68d0) = uVar2;
  local_90[0] = local_90[0] & 0xffffffff00000000;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_68);
  puVar7 = local_90;
LAB_008575d8:
  FUN_007ee578(param_1,puVar7);
  return;
}


