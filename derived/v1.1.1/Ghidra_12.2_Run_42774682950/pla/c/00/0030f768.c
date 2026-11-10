/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f768; name: FUN_0030f768
 */


void FUN_0030f768(exception *param_1)

{
  *(undefined **)param_1 = PTR_DAT_04373a58 + 0x10;
  if (((byte)param_1[0x18] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x28));
  }
  std::exception::~exception(param_1);
  return;
}


