/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a755c0; name: FUN_02a755c0
 */


void FUN_02a755c0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x19228) = param_2;
  *(undefined1 **)(param_1 + 0x68) = &LAB_02a755a4;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined1 *)(param_1 + 95000) = 1;
  *(undefined4 *)(param_1 + 0x1731c) = 3;
  FUN_00220c54(param_1 + 0x17340,*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x3010,param_1 + 0x60
               ,0,0,0);
  FUN_00221abc(param_1 + 0x17340,&LAB_02a754e8,param_1);
  *(undefined1 *)(param_1 + 0x19210) = 0;
  return;
}


