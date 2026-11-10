/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8de0; name: _INIT_93
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_93(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_043761a0;
  *(undefined8 *)PTR_DAT_043761a0 = 0x10000;
  uVar2 = _UNK_03889bb8;
  uVar1 = _DAT_03889bb0;
  *(undefined4 *)(puVar3 + 8) = 0x80000000;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  strncpy(puVar3 + 0x20,"nn.npln.GrpcDispatcher",0x1f);
  puVar3[0x3f] = 0;
  return;
}


