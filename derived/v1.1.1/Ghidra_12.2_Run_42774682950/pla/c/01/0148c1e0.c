/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148c1e0; name: FUN_0148c1e0
 */


void FUN_0148c1e0(long param_1,int *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  
  uVar10 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)(param_2 + 2);
  local_48 = param_2[4];
  uVar7 = *(ulong *)(param_1 + 0x2850);
  lVar6 = *(long *)(param_1 + 0x2818);
  plVar12 = (long *)(lVar6 + (uVar7 / 0xcc) * 8);
  if (*(long *)(param_1 + 0x2820) == lVar6) {
    uVar5 = *(ulong *)(param_1 + 0x2858);
    uVar7 = uVar5 + uVar7;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    piVar3 = (int *)0x0;
    plVar8 = (long *)(lVar6 + (SUB168(auVar2 * ZEXT816(0xa0a0a0a0a0a0a0a1),8) >> 4 &
                              0xffffffffffffff8));
  }
  else {
    piVar3 = (int *)(*(long *)(lVar6 + (uVar7 / 0xcc) * 8) + (uVar7 % 0xcc) * 0x14);
    uVar5 = *(ulong *)(param_1 + 0x2858);
    uVar7 = uVar5 + uVar7;
    plVar8 = (long *)(lVar6 + (uVar7 / 0xcc) * 8);
    piVar9 = (int *)(*plVar8 + (uVar7 % 0xcc) * 0x14);
    if (piVar9 != piVar3) {
      do {
        while( true ) {
          if (*piVar3 == *param_2) goto LAB_0148c288;
          piVar3 = piVar3 + 5;
          if ((long)piVar3 - *plVar12 == 0xff0) break;
          if (piVar9 == piVar3) goto LAB_0148c288;
        }
        plVar12 = plVar12 + 1;
        piVar3 = (int *)*plVar12;
      } while (piVar9 != piVar3);
    }
  }
LAB_0148c288:
  puVar11 = (ulong *)(param_1 + 0x2858);
  if (*(long *)(param_1 + 0x2820) == lVar6) {
    if (piVar3 != (int *)0x0) goto LAB_0148c3b8;
LAB_0148c2b8:
    local_58 = uVar10;
    if (uVar5 < 1000) goto LAB_0148c2c0;
LAB_0148c3dc:
    uVar7 = *(long *)(param_1 + 0x2850) + 1;
    puVar4 = *(undefined8 **)(param_1 + 0x2818);
    uVar5 = uVar5 - 1;
    *(ulong *)(param_1 + 0x2858) = uVar5;
    *(ulong *)(param_1 + 0x2850) = uVar7;
    if (0x197 < uVar7) {
      plVar12 = *(long **)(param_1 + 0x2860);
      uVar10 = *puVar4;
      uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar7 & 1) == 0) {
LAB_0148c460:
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar10,0xff0,4);
      }
      else {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0148c460;
        FUN_02bcc824(plVar12,uVar10,0xff0,4);
      }
      uVar7 = *(long *)(param_1 + 0x2850) - 0xcc;
      uVar5 = *(ulong *)(param_1 + 0x2858);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x2818) + 8);
      *(undefined8 **)(param_1 + 0x2818) = puVar4;
      *(ulong *)(param_1 + 0x2850) = uVar7;
    }
  }
  else {
    if ((int *)(*plVar8 + (uVar7 % 0xcc) * 0x14) == piVar3) goto LAB_0148c2b8;
LAB_0148c3b8:
    local_58._4_4_ = (int)((ulong)uVar10 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_ + piVar3[1],(int)uVar10);
    FUN_0148c548(param_1 + 0x2810);
    uVar5 = *puVar11;
    if (999 < uVar5) goto LAB_0148c3dc;
LAB_0148c2c0:
    puVar4 = *(undefined8 **)(param_1 + 0x2818);
    uVar7 = *(ulong *)(param_1 + 0x2850);
  }
  lVar6 = (long)*(undefined8 **)(param_1 + 0x2820) - (long)puVar4;
  uVar1 = 0;
  if (lVar6 != 0) {
    uVar1 = (lVar6 >> 3) * 0xcc - 1;
  }
  uVar7 = uVar7 + uVar5;
  if (uVar1 == uVar7) {
    FUN_01493cd4(param_1 + 0x2810);
    uVar7 = *(long *)(param_1 + 0x2850) + *(long *)(param_1 + 0x2858);
    puVar4 = *(undefined8 **)(param_1 + 0x2818);
    if (*(undefined8 **)(param_1 + 0x2820) == puVar4) goto LAB_0148c4c4;
  }
  else if (*(undefined8 **)(param_1 + 0x2820) == puVar4) {
LAB_0148c4c4:
    lVar6 = 0;
    goto LAB_0148c31c;
  }
  lVar6 = puVar4[uVar7 / 0xcc] + (uVar7 % 0xcc) * 0x14;
LAB_0148c31c:
  FUN_01494b20(param_1 + 0x2860,lVar6,&local_58);
  *puVar11 = *puVar11 + 1;
  return;
}


