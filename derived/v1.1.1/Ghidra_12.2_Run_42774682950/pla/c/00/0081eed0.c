/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081eed0; name: _INIT_121
 */


/* WARNING: Removing unreachable block (ram,0x0081ef54) */

void _INIT_121(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04377bf8;
  *(undefined8 *)PTR_DAT_04377bf8 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(undefined8 *)(puVar3 + 0x58) = 0;
  *(undefined8 *)(puVar3 + 0x60) = 0;
  *(undefined8 *)(puVar3 + 0x68) = 0;
  puVar4 = PTR_DAT_04377c00;
  *(undefined4 *)PTR_DAT_04377c00 = 3;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  puVar5 = PTR_DAT_04377c08;
  *(undefined8 *)PTR_DAT_04377c08 = 0x100000000;
  *(undefined4 *)(puVar5 + 8) = 2;
  nn::os::SdkAllocateTlsSlot((TlsSlot *)PTR_DAT_043774c0,(_func_void_ulong *)0x0);
  uVar2 = *(uint *)puVar4;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        uVar1 = *(uint *)((long)(puVar5 + lVar7 * 4) + 4);
        iVar6 = (int)lVar7;
        *(int *)(puVar3 + (ulong)*(uint *)(puVar5 + lVar7 * 4) * 4) = iVar6;
        lVar7 = lVar7 + 2;
        *(int *)(puVar3 + (ulong)uVar1 * 4) = iVar6 + 1;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar7);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    *(int *)(puVar3 + (ulong)*(uint *)(puVar5 + lVar7 * 4) * 4) = (int)lVar7;
  }
  return;
}


