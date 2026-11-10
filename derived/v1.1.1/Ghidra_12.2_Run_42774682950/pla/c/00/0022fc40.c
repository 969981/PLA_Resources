/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022fc40; name: FUN_0022fc40
 */


undefined8 FUN_0022fc40(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
                    *(long *)(PTR_DAT_04372850 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
}


