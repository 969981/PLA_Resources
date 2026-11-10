/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d6888; name: FUN_032d6888
 */


ulong FUN_032d6888(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_2;
  *param_1 = uVar1;
  if (param_1[1] < uVar1) {
    local_28 = 0;
    local_38 = 0;
    puStack_30 = PTR_DAT_04372528;
    FUN_03320b50(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x1e,
                 "hkLinearBuffer exhausted",&local_38);
  }
  return uVar2;
}


