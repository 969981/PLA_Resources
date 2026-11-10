/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c05e04; name: FUN_02c05e04
 */


void FUN_02c05e04(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x90,0);
  puVar6[2] = 1;
  *(undefined2 *)(puVar6 + 3) = 0x201;
  *(undefined8 *)((long)puVar6 + 0x3d) = 0;
  *(undefined8 *)((long)puVar6 + 0x45) = 0;
  *(undefined8 *)((long)puVar6 + 0x4d) = 0;
  *(undefined8 *)((long)puVar6 + 0x35) = 0;
  *(undefined8 *)((long)puVar6 + 0x2d) = 0;
  *(undefined8 *)((long)puVar6 + 0x55) = 0;
  *(undefined8 *)((long)puVar6 + 0x5d) = 0;
  *(undefined8 *)((long)puVar6 + 0x65) = 0;
  *(undefined8 *)((long)puVar6 + 0x6d) = 0;
  *(undefined8 *)((long)puVar6 + 0x25) = 0;
  *(undefined8 *)((long)puVar6 + 0x1d) = 0;
  *(undefined8 *)((long)puVar6 + 0x75) = 0;
  *(undefined8 *)((long)puVar6 + 0x7d) = 0;
  *(undefined8 *)((long)puVar6 + 0x85) = 0;
  *(undefined4 *)((long)puVar6 + 0x8c) = 0;
  *(undefined1 *)((long)puVar6 + 0x1c) = 0;
  puVar6[5] = 0;
  *(undefined4 *)(puVar6 + 4) = uVar2;
  *(int *)(puVar6 + 0x11) = (int)uVar10;
  puVar6[8] = 0x100000040;
  puVar6[9] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  *puVar6 = &PTR_LAB_042ba250;
  puVar6[1] = 0x90;
  puVar6[0x10] = uVar9;
  *(undefined2 *)((long)puVar6 + 0x1a) = 0x11;
  *(short *)(puVar6 + 0xe) =
       (short)((uint)(*(float *)(puVar6 + 4) * DAT_042b0ab0 * 1.0039062) >> 0x10);
  plVar5 = (long *)*param_2;
  *param_2 = (long)puVar6;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02c05f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


