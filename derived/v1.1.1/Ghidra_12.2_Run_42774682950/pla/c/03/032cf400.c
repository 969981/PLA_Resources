/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf400; name: FUN_032cf400
 */


undefined8 FUN_032cf400(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *local_30;
  long lStack_28;
  undefined *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_30 = &DAT_03996322;
  if (param_2 != (undefined1 *)0x0) {
    local_30 = param_2;
  }
  lStack_28 = 1;
  local_20 = &DAT_0411bac8;
  FUN_03320b50(0xdeadf00d,
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
               ,0x68,"Out of memory {}",&lStack_28);
  return 0;
}


