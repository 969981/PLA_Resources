/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3d164; name: FUN_02f3d164
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02f3d164(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = (long *)param_1[8];
  *param_1 = &PTR_LAB_042adba8;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5;
    do {
      while( true ) {
        if (plVar7 != plVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar5 = (long *)*plVar5;
        param_1[8] = plVar5;
        if (plVar7 != (long *)0x0) break;
        plVar7 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_02f3d190;
      }
      FUN_02f3e6fc(plVar7);
      (*DAT_0442d150)(0,plVar7);
      plVar7 = (long *)param_1[8];
    } while (plVar7 != (long *)0x0);
  }
LAB_02f3d190:
  lVar2 = DAT_0440a138;
  plVar5 = (long *)(DAT_0440a138 + 0x40);
  if ((long *)*plVar5 != (long *)0x0) {
    plVar7 = (long *)*plVar5;
    plVar8 = (long *)0x0;
    do {
      while (plVar3 = plVar7, plVar7 = (long *)*plVar3, (undefined8 *)plVar3[1] == param_1) {
        if ((long *)*plVar5 == plVar3) {
          plVar4 = plVar5;
        }
        else {
          plVar4 = plVar8;
        }
        *plVar4 = (long)plVar7;
        if (*(long **)(lVar2 + 0x48) == plVar3) {
          *(long **)(lVar2 + 0x48) = plVar8;
        }
        if ((plVar3 < *(long **)(lVar2 + 0x58)) ||
           (*(long **)(lVar2 + 0x58) + (ulong)*(uint *)(lVar2 + 0x60) * 4 <= plVar3)) {
          (*DAT_0442d150)(0);
        }
        else {
          *plVar3 = *(long *)(lVar2 + 0x50);
          *(long **)(lVar2 + 0x50) = plVar3;
        }
        *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + -1;
        if (plVar7 == (long *)0x0) goto LAB_02f3d228;
      }
      plVar8 = plVar3;
    } while (plVar7 != (long *)0x0);
  }
LAB_02f3d228:
  puVar6 = (undefined8 *)param_1[6];
  param_1[8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar6 + 10);
    *(int *)(puVar6 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar6)(puVar6);
      (*DAT_0442d150)(4,puVar6);
    }
    param_1[6] = 0;
  }
  param_1[0xb] = &PTR_LAB_042adbc0;
  FUN_02e79efc(param_1 + 0xb);
  if (param_1[3] == 0) {
    return;
  }
  FUN_02e771a8();
  return;
}


