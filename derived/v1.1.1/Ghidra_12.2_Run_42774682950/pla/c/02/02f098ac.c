/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f098ac; name: FUN_02f098ac
 */


void FUN_02f098ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  FUN_02f0be44();
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (ulong *)*puVar1;
    if ((puVar1 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 3 <= puVar1)) {
      (*DAT_0442d150)(0);
    }
    if (puVar3 != (ulong *)0x0) {
      puVar2 = (ulong *)*puVar3;
      if ((puVar3 < (ulong *)param_1[3]) ||
         ((ulong *)param_1[3] + (ulong)*(uint *)(param_1 + 4) * 3 <= puVar3)) {
        (*DAT_0442d150)(0,puVar3);
      }
      if (puVar2 != (ulong *)0x0) {
        do {
          while( true ) {
            puVar3 = (ulong *)*puVar2;
            if ((puVar2 < (ulong)param_1[3]) ||
               (param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x18 <= puVar2)) break;
            puVar2 = puVar3;
            if (puVar3 == (ulong *)0x0) goto LAB_02f09924;
          }
          (*DAT_0442d150)(0,puVar2);
          puVar2 = puVar3;
        } while (puVar3 != (ulong *)0x0);
      }
    }
  }
LAB_02f09924:
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


