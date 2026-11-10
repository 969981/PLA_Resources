/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00daf73c; name: FUN_00daf73c
 */


undefined8 FUN_00daf73c(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  pbVar2 = (byte *)(**(code **)(*param_1 + 0x18))();
  bVar1 = *pbVar2;
  if (bVar1 != 0) {
    puVar4 = &DAT_cbf29ce484222645;
    do {
      pbVar2 = pbVar2 + 1;
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar2;
    } while (bVar1 != 0);
    if ((long)puVar4 < -0x249fe8c5aa998f7c) {
      if ((long)puVar4 < -0x50f4be3d5bb81557) {
        if ((long)puVar4 < -0x58c5a80f63f820ae) {
          if (puVar4 == (undefined1 *)0x861b7459050fe63d) {
            uVar3 = FUN_00db16f8(0x15);
            return uVar3;
          }
          if (puVar4 == (undefined1 *)0x8cb1b743ba7a4270) {
            uVar3 = FUN_00db16f8(0xe);
            return uVar3;
          }
        }
        else {
          if (puVar4 == (undefined1 *)0xa73a57f09c07df52) {
            uVar3 = FUN_00db16f8(0);
            return uVar3;
          }
          if (puVar4 == (undefined1 *)0xab9d346a8c573e08) {
            uVar3 = FUN_00db16f8(0x11);
            return uVar3;
          }
          if (puVar4 == (undefined1 *)0xae5f416382fa49bd) {
            uVar3 = FUN_00db16f8(4);
            return uVar3;
          }
        }
      }
      else if ((long)puVar4 < -0x3a50f45d029a3b2c) {
        if (puVar4 == (undefined1 *)0xaf0b41c2a447eaa9) {
          uVar3 = FUN_00db16f8(2);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0xb5a4ac41baf200ee) {
          uVar3 = FUN_00db16f8(7);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0xc58baebda57c6f17) {
          uVar3 = FUN_00db16f8(0x12);
          return uVar3;
        }
      }
      else {
        if (puVar4 == (undefined1 *)0xc5af0ba2fd65c4d4) {
          uVar3 = FUN_00db16f8(0xf);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0xc888caaba489a87d) {
          uVar3 = FUN_00db16f8(6);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0xd7243775cd032cd3) {
          uVar3 = FUN_00db16f8(0xd);
          return uVar3;
        }
      }
    }
    else if ((long)puVar4 < 0x556dcc5f917f23d3) {
      if ((long)puVar4 < 0x47086fefbf6c8183) {
        if (puVar4 == (undefined1 *)0xdb60173a55667084) {
          uVar3 = FUN_00db16f8(0x14);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0x20d1edbadaaa64cc) {
          uVar3 = FUN_00db16f8(0x13);
          return uVar3;
        }
      }
      else {
        if (puVar4 == (undefined1 *)0x47086fefbf6c8183) {
          uVar3 = FUN_00db16f8(1);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0x4ae31133ec444743) {
          uVar3 = FUN_00db16f8(8);
          return uVar3;
        }
        if (puVar4 == (undefined1 *)0x4b5398bfea0b659d) {
          uVar3 = FUN_00db16f8(0x10);
          return uVar3;
        }
      }
    }
    else if ((long)puVar4 < 0x5f368907e3228ba1) {
      if (puVar4 == (undefined1 *)0x556dcc5f917f23d3) {
        uVar3 = FUN_00db16f8(3);
        return uVar3;
      }
      if (puVar4 == (undefined1 *)0x5f368607e3228688) {
        uVar3 = FUN_00db16f8(10);
        return uVar3;
      }
      if (puVar4 == (undefined1 *)0x5f368707e322883b) {
        uVar3 = FUN_00db16f8(0xb);
        return uVar3;
      }
    }
    else {
      if (puVar4 == (undefined1 *)0x5f368907e3228ba1) {
        uVar3 = FUN_00db16f8(9);
        return uVar3;
      }
      if (puVar4 == (undefined1 *)0x5f368c07e32290ba) {
        uVar3 = FUN_00db16f8(0xc);
        return uVar3;
      }
      if (puVar4 == (undefined1 *)0x62ba9eeaade82929) {
        uVar3 = FUN_00db16f8(5);
        return uVar3;
      }
    }
  }
  return 0;
}


