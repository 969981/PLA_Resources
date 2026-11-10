/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cbb4a0; name: FUN_02cbb4a0
 */


void FUN_02cbb4a0(void)

{
  undefined *puVar1;
  long lVar2;
  int local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (DAT_04408a30 != (long *)0x0) {
    (**(code **)(*DAT_04408a30 + 0x20))();
  }
  puVar1 = PTR_DAT_04377458;
  if (*(long *)PTR_DAT_04377458 != 0) {
    FUN_007e8724(*(long *)PTR_DAT_04377458,0);
  }
  if ((*(long *)PTR_DAT_043773c0 != 0) &&
     (lVar2 = FUN_00847ad0(*(long *)PTR_DAT_043773c0 + 0x10,DAT_04408a5c,0x77), lVar2 != 0)) {
    FUN_007e2a98(lVar2,1,1,100);
  }
  if (((DAT_04408a30 == (long *)0x0) ||
      ((**(code **)(*DAT_04408a30 + 0x28))(local_48), local_48[0] == 0)) &&
     ((*(long *)puVar1 == 0 || (FUN_007e8b38(local_48), local_48[0] == 0)))) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee578(local_48,local_38);
  }
  return;
}


