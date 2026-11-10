/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002300d0; name: FUN_002300d0
 */


void FUN_002300d0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_00877958(param_2,*(undefined8 *)
                        (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_3 * 0x40 +
                                  *(long *)(PTR_DAT_04372850 +
                                           ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68),0x3f);
  FUN_00877904(param_2,*(long *)(param_1 + 0x10) + (long)param_3 * 0x20);
  return;
}


