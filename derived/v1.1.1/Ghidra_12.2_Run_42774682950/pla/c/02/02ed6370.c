/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6370; name: FUN_02ed6370
 */


undefined8 FUN_02ed6370(long *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x88))();
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)param_1[0xd];
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1);
    puVar2 = (undefined8 *)param_1[0xd];
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (param_2 == 0) {
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
  }
  *(byte *)((long)puVar2 + 0x24) =
       *(byte *)((long)puVar2 + 0x24) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  (**(code **)(*param_1 + 0x1c8))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,0,0);
  return 1;
}


