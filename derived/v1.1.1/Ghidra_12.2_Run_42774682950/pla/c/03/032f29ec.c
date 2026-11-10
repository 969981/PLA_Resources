/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f29ec; name: FUN_032f29ec
 */


void FUN_032f29ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  void *__src;
  long lVar5;
  void *local_50;
  undefined8 local_48;
  
  puVar1 = PTR_PTR_0434a080;
  local_48 = 0x8000000000000000;
  local_50 = (void *)0x0;
  if ((void **)(param_1 + 0x50) != &local_50) {
    iVar4 = *(int *)(param_1 + 0x58);
    __src = *(void **)(param_1 + 0x50);
    if (iVar4 < 1) {
      memcpy((void *)0x0,__src,(long)iVar4 << 3);
    }
    else {
      local_50 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar4,8,0,0,(long)&local_48 + 4);
      memcpy(local_50,__src,(long)iVar4 << 3);
      lVar5 = 0;
      local_48 = CONCAT44(local_48._4_4_,iVar4);
      do {
        lVar2 = *(long *)((long)local_50 + lVar5 * 8);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x28))(param_2,*(undefined8 *)(lVar2 + 0x30));
          iVar4 = (int)local_48;
        }
        lVar2 = local_48;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
      uVar3 = (ulong)local_48._4_4_;
      local_48 = (ulong)local_48._4_4_ << 0x20;
      if ((-1 < lVar2) && (local_50 != (void *)0x0)) {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_50,(uVar3 & 0x3fffffff) << 3);
      }
    }
  }
  return;
}


