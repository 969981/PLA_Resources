/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e6dbc; name: FUN_001e6dbc
 */


undefined8 FUN_001e6dbc(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar3 = 1;
  }
  else if ((param_2 == (long *)0x0) || ((int)param_2[0x2de] != -0x3f212453)) {
    uVar3 = 2;
  }
  else {
    if (param_2[0x1b] != 0) {
      if ((char)param_1[0x3c] != '\0') {
        return 8;
      }
      uVar1 = *(uint *)(param_2 + 0xc);
      puVar5 = (undefined8 *)param_2[2];
      if (puVar5 == (undefined8 *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = (long *)*puVar5 == param_2;
      }
      if (uVar1 < 0x11) {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
        puVar5 = (undefined8 *)param_2[2];
      }
      if ((puVar5 != (undefined8 *)0x0) && ((int)param_2[0xc] - 10U < 7)) {
        *puVar5 = param_2;
        FUN_001dee08(param_2[2],2);
        bVar2 = true;
      }
      FUN_001e6fb8(param_2);
      if (param_2[2] != 0) {
        if (bVar2) {
          FUN_001e7044(param_2,*(undefined4 *)((long)param_2 + 100),uVar1 < 0x11);
        }
        else {
          FUN_001fd0f8(param_2);
        }
      }
      if (param_2[3] != 0) {
        FUN_001e3790(param_1 + 8,param_2 + 3,0);
      }
      if ((int)param_2[0x1a] == 2) {
        param_2[0x19] = 0;
        *(undefined4 *)(param_2 + 0x1a) = 0;
      }
      FUN_002043b0(param_2 + 0x2b5);
      FUN_001e381c(param_2 + 0x25b,0);
      param_2[0x220] = 0;
      *(undefined4 *)(param_2 + 0xc) = 0x11;
      FUN_001e727c(param_1,param_2);
      if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[2] = 0;
        param_2[2] = 0;
      }
      param_2[0x1b] = 0;
      for (plVar4 = (long *)param_1[4]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
        if (*(long **)(*plVar4 + 0x20) == param_2) {
          FUN_001e3790(param_1 + 4,plVar4,0);
          break;
        }
      }
      plVar4 = param_1 + 1;
      if ((long *)param_2[1] != (long *)0x0) {
        plVar4 = (long *)param_2[1];
      }
      *plVar4 = *param_2;
      plVar4 = param_1 + 2;
      if (*param_2 != 0) {
        plVar4 = (long *)(*param_2 + 8);
      }
      *plVar4 = param_2[1];
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      FUN_001e6d28(param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}


