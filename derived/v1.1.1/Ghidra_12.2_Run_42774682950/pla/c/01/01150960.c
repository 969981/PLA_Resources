/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01150960; name: FUN_01150960
 */


void FUN_01150960(undefined8 *param_1)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  nn::crypto::detail::Sha256Impl::Initialize();
  local_40 = DAT_03a791c0;
  uStack_38 = DAT_03a791c8;
  local_30 = DAT_03a791d0;
  uStack_28 = DAT_03a791d8;
  local_60 = DAT_03a791a0;
  uStack_58 = DAT_03a791a8;
  local_50 = DAT_03a791b0;
  uStack_48 = DAT_03a791b8;
  nn::crypto::detail::Sha256Impl::Update(param_1 + 2,(ulong)&local_60);
  return;
}


