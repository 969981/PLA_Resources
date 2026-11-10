/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eef318; name: FUN_02eef318
 */


void FUN_02eef318(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  *param_1 = (long)(PTR_DAT_043887a8 + 0x10);
  plVar5 = DAT_0440a130;
  if ((param_1 != (long *)0x0) && ((int)DAT_0440a130[1] != 0)) {
    lVar6 = *(long *)*DAT_0440a130;
    if (lVar6 == 0) {
      uVar4 = 0;
      do {
        if ((int)DAT_0440a130[1] - 1 == uVar4) goto LAB_02eef3c8;
        uVar4 = uVar4 + 1;
        lVar6 = ((long *)*DAT_0440a130)[uVar4 & 0xffffffff];
      } while (lVar6 == 0);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        local_60 = 0;
        local_68 = 0;
        local_58 = 0xff;
        local_50 = 0xff;
        local_48 = 0;
        local_70 = param_1;
        FUN_02edf018(lVar6 + 0x38,&local_70);
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
      do {
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        if (*(uint *)(plVar5 + 1) <= uVar1) goto LAB_02eef3c8;
        lVar6 = *(long *)(*plVar5 + (ulong)uVar1 * 8);
      } while (lVar6 == 0);
    } while( true );
  }
LAB_02eef3c8:
  *param_1 = (long)&PTR_FUN_042a9720;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  local_70 = param_1;
  FUN_02ef4594(param_1 + 1,&local_70);
  plVar5 = (long *)param_1[7];
  plVar2 = plVar5;
  if ((int)param_1[8] != 0) {
    puVar3 = (undefined8 *)*plVar5;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (*DAT_0442d150)(4,puVar3);
    }
    *plVar5 = 0;
    plVar2 = (long *)param_1[7];
    if (plVar5 + 1 != plVar2 + *(uint *)(param_1 + 8)) {
      puVar3 = (undefined8 *)plVar5[1];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (*DAT_0442d150)(4,puVar3);
      }
      plVar5[1] = 0;
      plVar2 = (long *)param_1[7];
      if (plVar5 + 2 != plVar2 + *(uint *)(param_1 + 8)) {
        puVar3 = (undefined8 *)plVar5[2];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3);
          (*DAT_0442d150)(4,puVar3);
        }
        plVar5[2] = 0;
        plVar2 = (long *)param_1[7];
        if (plVar5 + 3 != plVar2 + *(uint *)(param_1 + 8)) {
          puVar3 = (undefined8 *)plVar5[3];
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3);
            (*DAT_0442d150)(4,puVar3);
          }
          plVar5[3] = 0;
          for (plVar5 = plVar5 + 4; plVar2 = (long *)param_1[7],
              plVar5 != plVar2 + *(uint *)(param_1 + 8); plVar5 = plVar5 + 1) {
            puVar3 = (undefined8 *)*plVar5;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3);
              (*DAT_0442d150)(4,puVar3);
            }
            *plVar5 = 0;
          }
        }
      }
    }
  }
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_1 + 5 != plVar2) {
      (*DAT_0442d158)(4);
    }
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}


