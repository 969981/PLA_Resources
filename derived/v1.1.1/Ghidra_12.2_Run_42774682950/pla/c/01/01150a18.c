/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01150a18; name: FUN_01150a18
 */


void FUN_01150a18(undefined8 *param_1,long param_2)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 8) == '\0') {
    local_40 = DAT_03a79200;
    uStack_38 = DAT_03a79208;
    local_30 = DAT_03a79210;
    uStack_28 = DAT_03a79218;
    local_60 = DAT_03a791e0;
    uStack_58 = DAT_03a791e8;
    local_50 = DAT_03a791f0;
    uStack_48 = DAT_03a791f8;
    nn::crypto::detail::Sha256Impl::Update((void *)(param_2 + 0x10),(ulong)&local_60);
    *(undefined1 *)(param_2 + 8) = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::crypto::detail::Sha256Impl::GetHash((void *)(param_2 + 0x10),(ulong)param_1);
  return;
}


