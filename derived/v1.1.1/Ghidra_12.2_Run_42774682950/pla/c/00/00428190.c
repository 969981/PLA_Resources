/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428190; name: FUN_00428190
 */


void FUN_00428190(void *param_1,ulong param_2)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+OpenSSL-0_0_0+NPLN");
  nn::os::GenerateRandomBytes(param_1,param_2);
  return;
}


