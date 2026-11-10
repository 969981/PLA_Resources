/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f099d0; name: FUN_02f099d0
 */


void FUN_02f099d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)0x0) goto LAB_02f09b10;
  }
  else {
    *param_1 = *puVar1;
    if ((undefined8 *)param_1[1] == puVar1) {
      param_1[1] = 0;
    }
    *puVar1 = param_1[2];
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
    puVar2 = (undefined8 *)*param_1;
    param_1[2] = puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      *param_1 = *puVar2;
      puVar1 = puVar2;
      if ((undefined8 *)param_1[1] != puVar2) goto LAB_02f09a5c;
      do {
        param_1[1] = 0;
        puVar1 = puVar2;
LAB_02f09a5c:
        do {
          *puVar1 = param_1[2];
          *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
          puVar2 = (undefined8 *)*param_1;
          param_1[2] = puVar1;
          if (puVar2 == (undefined8 *)0x0) goto LAB_02f09a98;
          *param_1 = *puVar2;
          puVar1 = puVar2;
        } while ((undefined8 *)param_1[1] != puVar2);
      } while( true );
    }
  }
LAB_02f09a98:
  puVar2 = (undefined8 *)*puVar1;
  if ((puVar1 < (undefined8 *)param_1[3]) ||
     ((undefined8 *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 5 <= puVar1)) {
    (*DAT_0442d150)(0);
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 5 <= puVar2)) {
      (*DAT_0442d150)(0,puVar2);
    }
    if (puVar1 != (undefined8 *)0x0) {
      plVar4 = (long *)*puVar1;
      if ((puVar1 < (undefined8 *)param_1[3]) ||
         ((undefined8 *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 5 <= puVar1)) {
        (*DAT_0442d150)(0,puVar1);
      }
      if (plVar4 != (long *)0x0) {
        plVar3 = (long *)*plVar4;
        if ((plVar4 < (long *)param_1[3]) ||
           ((long *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 5 <= plVar4)) {
          (*DAT_0442d150)(0,plVar4);
          plVar4 = plVar3;
          goto joined_r0x02f09c0c;
        }
        while (plVar3 != (long *)0x0) {
          while( true ) {
            plVar4 = (long *)*plVar3;
            if ((plVar3 < (long *)param_1[3]) ||
               ((long *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 5 <= plVar3)) break;
joined_r0x02f09c0c:
            plVar3 = plVar4;
            if (plVar3 == (long *)0x0) goto LAB_02f09b10;
          }
          (*DAT_0442d150)(0,plVar3);
          plVar3 = plVar4;
        }
      }
    }
  }
LAB_02f09b10:
  if (param_1[3] != 0) {
    (*DAT_0442d150)(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


