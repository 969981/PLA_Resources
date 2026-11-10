/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e81050; name: FUN_02e81050
 */


void FUN_02e81050(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 *param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (((*(ushort *)(lVar2 + 0x34) & 1) == 0) &&
       (puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48), puVar1 != (undefined8 *)0x0)) {
      *(undefined8 *)((long)puVar1 + 0x1c) = 0;
      *(undefined8 *)((long)puVar1 + 0x24) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 7) = param_5;
      *(undefined4 *)((long)puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 6) = param_4;
      *puVar1 = &PTR_LAB_042a7278;
      puVar1[1] = lVar2;
      *(undefined8 *)((long)puVar1 + 0x24) = param_6[1];
      *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_6 + 2);
      piVar3 = (int *)*param_6;
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      *(int **)((long)puVar1 + 0x1c) = piVar3;
      FUN_02e813f0(DAT_0440a128,puVar1,param_7);
      lVar2 = *(long *)(lVar2 + 0x18);
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x18);
    }
    do {
      if (lVar2 == 0) {
        return;
      }
      while (((*(byte *)(lVar2 + 0x34) & 1) == 0 &&
             (puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48), puVar1 != (undefined8 *)0x0))) {
        *(undefined8 *)((long)puVar1 + 0x1c) = 0;
        *(undefined8 *)((long)puVar1 + 0x24) = 0;
        puVar1[8] = 0;
        *(undefined4 *)(puVar1 + 7) = param_5;
        *(undefined4 *)((long)puVar1 + 0x2c) = 0;
        *(undefined4 *)(puVar1 + 6) = param_4;
        *puVar1 = &PTR_LAB_042a7278;
        puVar1[1] = lVar2;
        *(undefined8 *)((long)puVar1 + 0x24) = param_6[1];
        *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_6 + 2);
        piVar3 = (int *)*param_6;
        if (piVar3 != (int *)0x0) {
          *piVar3 = *piVar3 + 1;
        }
        *(int **)((long)puVar1 + 0x1c) = piVar3;
        FUN_02e813f0(DAT_0440a128,puVar1,param_7);
        lVar2 = *(long *)(lVar2 + 0x18);
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = *(long *)(lVar2 + 0x18);
    } while( true );
  }
  if ((*(ushort *)(lVar2 + 0x34) & 1) == 0) {
    puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48);
    if (puVar1 == (undefined8 *)0x0) goto LAB_02e81138;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x24) = 0;
    *puVar1 = &PTR_LAB_042a7278;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
  }
  else {
    if (((*(int *)(param_2 + 0x40) == 0) || (**(long **)(param_2 + 0x38) == 0)) ||
       (puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48), puVar1 == (undefined8 *)0x0))
    goto LAB_02e81138;
    *puVar1 = &PTR_LAB_042a7278;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x24) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = param_2;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  *(undefined4 *)(puVar1 + 7) = param_5;
  puVar1[1] = lVar2;
  *(undefined4 *)(puVar1 + 6) = param_4;
  *(undefined8 *)((long)puVar1 + 0x24) = param_6[1];
  *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_6 + 2);
  piVar3 = (int *)*param_6;
  if (*(long *)((long)puVar1 + 0x1c) != 0) {
    FUN_02e771a8();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(int **)((long)puVar1 + 0x1c) = piVar3;
  FUN_02e813f0(DAT_0440a128,puVar1,param_7);
LAB_02e81138:
  lVar2 = *(long *)(lVar2 + 0x18);
  do {
    if (lVar2 == 0) {
      return;
    }
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_042a7278;
        *(undefined8 *)((long)puVar1 + 0x1c) = 0;
        *(undefined8 *)((long)puVar1 + 0x24) = 0;
        *(undefined8 *)((long)puVar1 + 0x2c) = 0;
        *(undefined4 *)(puVar1 + 7) = 0;
        puVar1[8] = 0;
        goto LAB_02e811ac;
      }
    }
    else if (((*(int *)(param_2 + 0x40) != 0) && (**(long **)(param_2 + 0x38) != 0)) &&
            (puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x48), puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &PTR_LAB_042a7278;
      *(undefined8 *)((long)puVar1 + 0x1c) = 0;
      *(undefined8 *)((long)puVar1 + 0x24) = 0;
      *(undefined8 *)((long)puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      puVar1[8] = param_2;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
LAB_02e811ac:
      *(undefined4 *)(puVar1 + 7) = param_5;
      puVar1[1] = lVar2;
      *(undefined4 *)(puVar1 + 6) = param_4;
      *(undefined8 *)((long)puVar1 + 0x24) = param_6[1];
      *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(param_6 + 2);
      piVar3 = (int *)*param_6;
      if (*(long *)((long)puVar1 + 0x1c) != 0) {
        FUN_02e771a8();
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      *(int **)((long)puVar1 + 0x1c) = piVar3;
      FUN_02e813f0(DAT_0440a128,puVar1,param_7);
    }
    lVar2 = *(long *)(lVar2 + 0x18);
  } while( true );
}


