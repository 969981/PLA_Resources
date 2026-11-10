/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed627c; name: FUN_02ed627c
 */


undefined8 FUN_02ed627c(long *param_1,uint param_2,byte param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  if (param_1[0xd] == 0) {
    if ((param_3 & 1) == 0) {
      return 1;
    }
    puVar2 = (undefined8 *)(*DAT_0442d138)(2,0x28);
    if (puVar2 == (undefined8 *)0x0) {
      param_1[0xd] = 0;
      return 0x34;
    }
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined1 *)((long)puVar2 + 0x24) = 0;
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    param_1[0xd] = (long)puVar2;
    *(byte *)(puVar2 + (ulong)param_2 + 1) = param_3 & 1;
  }
  else {
    *(byte *)(param_1[0xd] + (ulong)param_2 * 8 + 8) = param_3 & 1;
    if ((param_3 & 1) == 0) {
      return 1;
    }
  }
  lVar1 = param_1[0xd] + (ulong)param_2 * 8;
  piVar3 = (int *)(lVar1 + 4);
  if (*piVar3 != 0) {
    *(undefined1 *)(lVar1 + 9) = 0;
    *piVar3 = 0;
    (**(code **)(*param_1 + 0x188))(param_1,0,0);
    (**(code **)(*param_1 + 0x118))(param_1,param_2);
  }
  return 1;
}


