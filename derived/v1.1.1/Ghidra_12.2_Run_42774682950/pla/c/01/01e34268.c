/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e34268; name: FUN_01e34268
 */


void FUN_01e34268(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x78);
  lVar2 = *(long *)(lVar1 + 0x108);
  if (*(long *)(lVar1 + 0x110) != lVar2) {
    uVar3 = 0;
    lVar4 = 4;
    do {
      *(undefined1 *)(lVar2 + lVar4) = 1;
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(lVar1 + 0x108);
      lVar4 = lVar4 + 0x90;
    } while (uVar3 < (ulong)((*(long *)(lVar1 + 0x110) - lVar2 >> 4) * -0x71c71c71c71c71c7));
  }
  if (*(long *)(lVar1 + 0xd8) != *(long *)(lVar1 + 0xd0)) {
    *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 4) = 1;
    if (1 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) * -0x71c71c71c71c71c7))
    {
      *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x94) = 1;
      if (2 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) * -0x71c71c71c71c71c7
                     )) {
        *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x124) = 1;
        if (3 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) *
                       -0x71c71c71c71c71c7)) {
          *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x1b4) = 1;
          if (4 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) *
                         -0x71c71c71c71c71c7)) {
            *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x244) = 1;
            lVar2 = *(long *)(lVar1 + 0xd0);
            if (5 < (ulong)((*(long *)(lVar1 + 0xd8) - lVar2 >> 4) * -0x71c71c71c71c71c7)) {
              uVar3 = 5;
              lVar4 = 0x2d4;
              do {
                *(undefined1 *)(lVar2 + lVar4) = 1;
                uVar3 = uVar3 + 1;
                lVar2 = *(long *)(lVar1 + 0xd0);
                lVar4 = lVar4 + 0x90;
              } while (uVar3 < (ulong)((*(long *)(lVar1 + 0xd8) - lVar2 >> 4) * -0x71c71c71c71c71c7)
                      );
            }
          }
        }
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x80);
  lVar2 = *(long *)(lVar1 + 0x108);
  if (*(long *)(lVar1 + 0x110) != lVar2) {
    uVar3 = 0;
    lVar4 = 4;
    do {
      *(undefined1 *)(lVar2 + lVar4) = 1;
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(lVar1 + 0x108);
      lVar4 = lVar4 + 0x90;
    } while (uVar3 < (ulong)((*(long *)(lVar1 + 0x110) - lVar2 >> 4) * -0x71c71c71c71c71c7));
  }
  if (*(long *)(lVar1 + 0xd8) != *(long *)(lVar1 + 0xd0)) {
    *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 4) = 1;
    if (1 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) * -0x71c71c71c71c71c7))
    {
      *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x94) = 1;
      if (2 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) * -0x71c71c71c71c71c7
                     )) {
        *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x124) = 1;
        if (3 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) *
                       -0x71c71c71c71c71c7)) {
          *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x1b4) = 1;
          if (4 < (ulong)((*(long *)(lVar1 + 0xd8) - *(long *)(lVar1 + 0xd0) >> 4) *
                         -0x71c71c71c71c71c7)) {
            *(undefined1 *)(*(long *)(lVar1 + 0xd0) + 0x244) = 1;
            lVar2 = *(long *)(lVar1 + 0xd0);
            if (5 < (ulong)((*(long *)(lVar1 + 0xd8) - lVar2 >> 4) * -0x71c71c71c71c71c7)) {
              uVar3 = 5;
              lVar4 = 0x2d4;
              do {
                *(undefined1 *)(lVar2 + lVar4) = 1;
                uVar3 = uVar3 + 1;
                lVar2 = *(long *)(lVar1 + 0xd0);
                lVar4 = lVar4 + 0x90;
              } while (uVar3 < (ulong)((*(long *)(lVar1 + 0xd8) - lVar2 >> 4) * -0x71c71c71c71c71c7)
                      );
            }
          }
        }
      }
    }
  }
  return;
}


