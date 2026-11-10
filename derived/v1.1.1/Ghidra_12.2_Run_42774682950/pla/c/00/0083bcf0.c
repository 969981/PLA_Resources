/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083bcf0; name: FUN_0083bcf0
 */


void FUN_0083bcf0(undefined8 param_1,long param_2,byte param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong local_78 [8];
  undefined4 local_38 [2];
  
  *(byte *)(param_2 + 0xa8) = param_3 & 1;
  *(undefined1 *)(param_2 + 0xa9) = 0;
  FUN_0083fbc0(local_78);
  FUN_0083fc48(param_2 + 0xb0,local_78);
  FUN_0083fc40(local_78);
  iVar1 = (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x138))();
  plVar2 = (long *)FUN_007ecfa4();
  lVar3 = *plVar2;
  local_78[0] = 0;
  FUN_007ecf14(local_78);
  *(ulong *)(param_2 + 0x68) = local_78[0] + lVar3 * iVar1;
  if (*(int *)(param_2 + 0x60) != 1) {
    *(undefined4 *)(param_2 + 0x60) = 1;
  }
  *(undefined **)(param_2 + 0x30) = PTR_FUN_04377ea0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "ProcessHostMigrationJob::WaitNetworkHostMigration";
  local_78[0] = local_78[0] & 0xffffffff00000000;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_78);
  return;
}


