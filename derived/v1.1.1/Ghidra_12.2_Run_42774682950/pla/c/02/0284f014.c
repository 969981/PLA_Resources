/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284f014; name: FUN_0284f014
 */


bool FUN_0284f014(long param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 local_64 [4];
  long *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined4 local_38;
  
  local_40 = (long *)0x0;
  local_38 = 0;
  local_64[0] = 0;
  local_50 = &DAT_03996322;
  uStack_48 = 0;
  local_60 = (long *)0x0;
  puStack_58 = &DAT_cbf29ce484222645;
  FUN_0284f0fc(&local_60,local_64,*(undefined4 *)(param_1 + 0xc0),*param_2,
               *(undefined2 *)(param_2 + 1),param_2[2],*(undefined1 *)(param_2 + 3),
               *(undefined1 *)((long)param_2 + 0xd),0);
  uVar2 = local_64[0];
  uVar3 = FUN_02c4d8d4(*(undefined8 *)(param_1 + 8),&local_60,0,0);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = param_3;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return bVar1;
}


