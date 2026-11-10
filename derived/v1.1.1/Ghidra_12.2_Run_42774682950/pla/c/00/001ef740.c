/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef740; name: FUN_001ef740
 */


void FUN_001ef740(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined1 *)(lVar1 + 0x21c) = 0;
  *(undefined4 *)(lVar1 + 0x238) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined2 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined8 *)(lVar1 + 0x260) = *(undefined8 *)(param_1 + 0xc10);
  *(undefined8 *)(lVar1 + 0x268) = 0;
  return;
}


