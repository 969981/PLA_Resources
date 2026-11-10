/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f112d8; name: FUN_02f112d8
 */


/* WARNING: Removing unreachable block (ram,0x02f11628) */

void FUN_02f112d8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  
  nn::os::LockMutex((MutexType *)&DAT_0440ad90);
  if (DAT_0440ad8c != 0) {
LAB_02f11334:
    do {
      plVar3 = DAT_0440ad68;
      plVar8 = (long *)DAT_0440ad68[1];
      if (*(int *)(DAT_0440ad68 + 2) == 4) {
        if (*(int *)((long)DAT_0440ad68 + 0x14) == 1) {
          *(uint *)((long)plVar8 + 0x2a3) = *(uint *)((long)plVar8 + 0x2a3) & 0xfffffeff | 0x800;
LAB_02f114ac:
          if (*(int *)(plVar3 + 2) != 4) goto LAB_02f114bc;
        }
        plVar9 = (long *)plVar3[1];
        plVar7 = (long *)0x0;
        plVar8 = (long *)&DAT_0440ad48;
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar8;
          plVar8 = plVar7 + 0x39;
        } while (plVar7 != (long *)0x0 && plVar9 != plVar7);
        if (plVar7 != (long *)0x0) {
          if (DAT_0440ad48 == plVar7) {
            plVar8 = (long *)&DAT_0440ad48;
          }
          else {
            plVar8 = plVar6 + 0x39;
          }
          *plVar8 = plVar7[0x39];
          if (DAT_0440ad40 == plVar7) {
            DAT_0440ad40 = plVar6;
          }
          DAT_0440ad38 = DAT_0440ad38 + -1;
          plVar9 = (long *)plVar3[1];
        }
        puVar5 = DAT_0440a470;
        if (DAT_0440a470 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)*DAT_0440a470;
          if ((long *)DAT_0440a470[1] == plVar9) {
            if (DAT_0440a478 == DAT_0440a470) {
              DAT_0440a478 = (undefined8 *)0x0;
            }
            if ((DAT_0440a470 < DAT_0440a488) ||
               (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= DAT_0440a470)) {
              DAT_0440a470 = puVar2;
              (*DAT_0442d150)(5,puVar5);
            }
            else {
              puVar4 = puVar2;
              *DAT_0440a470 = DAT_0440a480;
              DAT_0440a470 = puVar4;
              DAT_0440a480 = puVar5;
            }
            DAT_0440a494 = DAT_0440a494 + -1;
            puVar5 = (undefined8 *)0x0;
          }
          while (puVar4 = puVar5, puVar5 = puVar2, puVar5 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar5;
            if ((long *)puVar5[1] == plVar9) {
              puVar1 = &DAT_0440a470;
              if (DAT_0440a470 != puVar5) {
                puVar1 = puVar4;
              }
              *puVar1 = puVar2;
              if (DAT_0440a478 == puVar5) {
                DAT_0440a478 = puVar4;
              }
              if ((puVar5 < DAT_0440a488) || (DAT_0440a488 + (ulong)DAT_0440a490 * 3 <= puVar5)) {
                (*DAT_0442d150)(5);
              }
              else {
                *puVar5 = DAT_0440a480;
                DAT_0440a480 = puVar5;
              }
              DAT_0440a494 = DAT_0440a494 + -1;
              puVar5 = puVar4;
            }
          }
        }
        (**(code **)(*plVar9 + 0x20))(plVar9,0);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))(plVar9);
          (*DAT_0442d150)(0,plVar9);
        }
      }
      else if (*(int *)(DAT_0440ad68 + 2) == 3) {
        uVar10 = *(undefined4 *)(DAT_0440ad68 + 3);
        *(uint *)((long)plVar8 + 0x2a3) = *(uint *)((long)plVar8 + 0x2a3) | 0x100;
        (**(code **)(*plVar8 + 0x78))(plVar8);
        (**(code **)(*plVar8 + 0x30))(uVar10,plVar8);
        goto LAB_02f114ac;
      }
LAB_02f114bc:
      plVar3 = DAT_0440ad68;
      if (DAT_0440ad68 == (long *)0x0) {
        if (DAT_0440ad8c == 0) break;
        goto LAB_02f11334;
      }
      if (DAT_0440ad70 == DAT_0440ad68) {
        DAT_0440ad70 = (long *)0x0;
      }
      if ((DAT_0440ad68 < DAT_0440ad80) || (DAT_0440ad80 + (ulong)DAT_0440ad88 * 4 <= DAT_0440ad68))
      {
        DAT_0440ad68 = (long *)*DAT_0440ad68;
        (*DAT_0442d150)(0,plVar3);
      }
      else {
        plVar8 = (long *)*DAT_0440ad68;
        *DAT_0440ad68 = (long)DAT_0440ad78;
        DAT_0440ad68 = plVar8;
        DAT_0440ad78 = plVar3;
      }
      DAT_0440ad8c = DAT_0440ad8c + -1;
    } while (DAT_0440ad8c != 0);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440ad90);
  return;
}


