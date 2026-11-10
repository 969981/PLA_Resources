/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03338458; name: FUN_03338458
 */


void FUN_03338458(long *param_1)

{
  long lVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  lVar1 = *param_1;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    while( true ) {
      FUN_03339e08(lVar1 + 0x20);
      FUN_03339e70(lVar1 + 0x40);
      FUN_03339e08(lVar1 + 0x80);
      FUN_03339e70(lVar1 + 0xa0);
      FUN_03339e08(lVar1 + 0xe0);
      FUN_03339e70(lVar1 + 0x100);
      FUN_03339e08(lVar1 + 0x140);
      FUN_03339e70(lVar1 + 0x160);
      FUN_03339e08(lVar1 + 0x1a0);
      FUN_03339e70(lVar1 + 0x1c0);
      FUN_03339e08(lVar1 + 0x200);
      FUN_03339e70(lVar1 + 0x220);
      FUN_03339e08(lVar1 + 0x260);
      FUN_03339e70(lVar1 + 0x280);
      FUN_03339e08(lVar1 + 0x2c0);
      FUN_03339e70(lVar1 + 0x2e0);
      FUN_03339e08(lVar1 + 800);
      FUN_03339e70(lVar1 + 0x340);
      FUN_03339e08(lVar1 + 0x380);
      FUN_03339e70(lVar1 + 0x3a0);
      FUN_03339e08(lVar1 + 0x3e0);
      FUN_03339e70(lVar1 + 0x400);
      FUN_03339e08(lVar1 + 0x440);
      FUN_03339e70(lVar1 + 0x460);
      FUN_03339e08(lVar1 + 0x4a0);
      FUN_03339e70(lVar1 + 0x4c0);
      FUN_03339e08(lVar1 + 0x500);
      FUN_03339e70(lVar1 + 0x520);
      FUN_03339e08(lVar1 + 0x560);
      FUN_03339e70(lVar1 + 0x580);
      FUN_03339e08(lVar1 + 0x5c0);
      FUN_03339e70(lVar1 + 0x5e0);
      FUN_03339e08(lVar1 + 0x620);
      FUN_03339e70(lVar1 + 0x640);
      FUN_03339e08(lVar1 + 0x680);
      FUN_03339e70(lVar1 + 0x6a0);
      FUN_03339e08(lVar1 + 0x6e0);
      FUN_03339e70(lVar1 + 0x700);
      FUN_03339e08(lVar1 + 0x740);
      FUN_03339e70(lVar1 + 0x760);
      FUN_03339e08(lVar1 + 0x7a0);
      FUN_03339e70(lVar1 + 0x7c0);
      FUN_03339e08(lVar1 + 0x800);
      FUN_03339e70(lVar1 + 0x820);
      FUN_03339e08(lVar1 + 0x860);
      FUN_03339e70(lVar1 + 0x880);
      FUN_03339e08(lVar1 + 0x8c0);
      FUN_03339e70(lVar1 + 0x8e0);
      FUN_03339e08(lVar1 + 0x920);
      FUN_03339e70(lVar1 + 0x940);
      FUN_03339e08(lVar1 + 0x980);
      FUN_03339e70(lVar1 + 0x9a0);
      FUN_03339e08(lVar1 + 0x9e0);
      FUN_03339e70(lVar1 + 0xa00);
      FUN_03339e08(lVar1 + 0xa40);
      FUN_03339e70(lVar1 + 0xa60);
      FUN_03339e08(lVar1 + 0xaa0);
      FUN_03339e70(lVar1 + 0xac0);
      FUN_03339e08(lVar1 + 0xb00);
      FUN_03339e70(lVar1 + 0xb20);
      FUN_03339e08(lVar1 + 0xb60);
      FUN_03339e70(lVar1 + 0xb80);
      FUN_03339e08(lVar1 + 0xbc0);
      FUN_03339e70(lVar1 + 0xbe0);
      FUN_03339e08(lVar1 + 0xc20);
      FUN_03339e70(lVar1 + 0xc40);
      FUN_03339e08(lVar1 + 0xc80);
      FUN_03339e70(lVar1 + 0xca0);
      FUN_03339e08(lVar1 + 0xce0);
      FUN_03339e70(lVar1 + 0xd00);
      FUN_03339e08(lVar1 + 0xd40);
      FUN_03339e70(lVar1 + 0xd60);
      FUN_03339e08(lVar1 + 0xda0);
      FUN_03339e70(lVar1 + 0xdc0);
      FUN_03339e08(lVar1 + 0xe00);
      FUN_03339e70(lVar1 + 0xe20);
      FUN_03339e08(lVar1 + 0xe60);
      FUN_03339e70(lVar1 + 0xe80);
      FUN_03339e08(lVar1 + 0xec0);
      FUN_03339e70(lVar1 + 0xee0);
      FUN_03339e08(lVar1 + 0xf20);
      FUN_03339e70(lVar1 + 0xf40);
      FUN_03339e08(lVar1 + 0xf80);
      FUN_03339e70(lVar1 + 4000);
      lVar2 = *(long *)(lVar1 + 0xfc0);
      FUN_03338cb8(lVar1);
      if (lVar2 == 0) break;
      *(long *)(lVar1 + 0xfc0) = lVar2;
      *(long *)(lVar1 + 0xfb8) = lVar2;
      lVar1 = lVar2;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return;
}


