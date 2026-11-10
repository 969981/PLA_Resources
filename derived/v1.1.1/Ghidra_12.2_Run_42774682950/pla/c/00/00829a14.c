/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00829a14; name: FUN_00829a14
 */


void FUN_00829a14(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04377ce0 + 0x10);
  puVar2 = PTR_DAT_043773c0;
  plVar3 = (long *)FUN_00855064(*(undefined8 *)PTR_DAT_043773c0);
  puVar5 = (undefined8 *)param_1[0xb];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[0xb] = 0;
  }
  if (param_1[3] != 0) {
    param_1[3] = 0;
  }
  lVar6 = param_1[0x22];
  if (lVar6 != 0) {
    if (param_1[0x20] != 0) {
      plVar1 = param_1 + 0x1a;
      if ((long *)param_1[0x1b] != plVar1) {
        plVar4 = (long *)param_1[0x1b];
        do {
          plVar7 = (long *)plVar4[1];
          *plVar4 = 0;
          plVar4[1] = 0;
          FUN_007e8fc4(param_1 + 0x1d,param_1 + 0x1d,
                       (long)*(int *)((long)param_1 + 0xfc) + (long)plVar4);
          plVar4 = plVar7;
        } while (plVar7 != plVar1);
      }
      FUN_007e8f94(plVar1);
      lVar6 = param_1[0x22];
    }
    if (lVar6 != 0) {
      FUN_0081a840(lVar6);
      FUN_0081a800(lVar6);
    }
    param_1[0x22] = 0;
  }
  puVar5 = (undefined8 *)param_1[6];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[6] = 0;
  }
  puVar5 = (undefined8 *)param_1[7];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[7] = 0;
  }
  puVar5 = (undefined8 *)param_1[8];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[8] = 0;
  }
  puVar5 = (undefined8 *)param_1[9];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[9] = 0;
  }
  puVar5 = (undefined8 *)param_1[10];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[10] = 0;
  }
  puVar5 = (undefined8 *)param_1[5];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0081a800(puVar5);
    param_1[5] = 0;
  }
  if (*(long *)PTR_DAT_04377ce8 != 0) {
    FUN_0082eda0();
  }
  if (param_1[2] != 0) {
    FUN_00834118();
    param_1[2] = 0;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*(long *)puVar2 != 0) {
      FUN_00847a24(*(long *)puVar2 + 0x10);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*plVar3 + 0xf0))(plVar3);
    param_1[0xc] = 0;
  }
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    FUN_007e5c20(lVar6);
    FUN_0081a800(lVar6);
    param_1[0x15] = 0;
  }
  FUN_007e81d4(param_1 + 0x78);
  FUN_007e81d4(param_1 + 0x65);
  FUN_007e81d4(param_1 + 0x52);
  FUN_007e81d4(param_1 + 0x3f);
  FUN_0083fc40(param_1 + 0x37);
  FUN_0083fc40(param_1 + 0x2f);
  FUN_007e34a4(param_1 + 0x27);
  return;
}


