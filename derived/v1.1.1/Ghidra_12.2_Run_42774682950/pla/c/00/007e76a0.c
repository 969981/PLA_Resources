/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e76a0; name: FUN_007e76a0
 */


void FUN_007e76a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((*(int *)(param_1 + 0x7c) != 0) || (*(int *)(param_1 + 0x78) != 0)) {
    lVar5 = 0;
    bVar3 = *(byte *)(param_1 + 0x27);
    uVar7 = (ulong)(bVar3 >> 4);
    uVar10 = (ulong)bVar3 & 0xf;
    do {
      lVar4 = param_1 + uVar10 * 0x10;
      uVar2 = *(undefined8 *)(lVar4 + 0x90);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar4 + 0x88);
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      uVar10 = *(ulong *)(param_1 + 0x58);
      uVar11 = *(ulong *)(param_1 + 0x60);
      lVar4 = lVar5;
      while( true ) {
        lVar1 = param_1 + uVar7 * 0x10;
        uVar7 = *(ulong *)(lVar1 + 0x90);
        lVar5 = lVar4 + -1;
        *(ulong *)(param_1 + 0x58) =
             *(ulong *)(lVar1 + 0x88) ^ uVar10 >> 4 ^
             (ulong)*(uint *)(&DAT_03a7180c + (uVar11 & 0xf) * 4) << 0x20;
        *(ulong *)(param_1 + 0x60) = uVar7 ^ (uVar11 >> 4 | uVar10 << 0x3c);
        if (lVar4 == -0xf) {
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x60);
          uVar7 = (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uVar10 = (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
                   (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          *(ulong *)(param_1 + 0x18) = uVar7;
          *(ulong *)(param_1 + 0x20) = uVar10;
          goto LAB_007e7770;
        }
        bVar3 = ((byte *)(param_1 + 0x27))[lVar5];
        uVar7 = (ulong)(bVar3 >> 4);
        uVar10 = (ulong)bVar3 & 0xf;
        if (lVar5 == 0) break;
        lVar4 = param_1 + uVar10 * 0x10;
        uVar10 = *(ulong *)(lVar4 + 0x88) ^ *(ulong *)(param_1 + 0x58) >> 4 ^
                 (ulong)*(uint *)(&DAT_03a7180c + (*(ulong *)(param_1 + 0x60) & 0xf) * 4) << 0x20;
        uVar11 = *(ulong *)(lVar4 + 0x90) ^
                 (*(ulong *)(param_1 + 0x60) >> 4 | *(ulong *)(param_1 + 0x58) << 0x3c);
        *(ulong *)(param_1 + 0x58) = uVar10;
        *(ulong *)(param_1 + 0x60) = uVar11;
        lVar4 = lVar5;
      }
    } while( true );
  }
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar10 = *(ulong *)(param_1 + 0x20);
LAB_007e7770:
  uVar11 = *(long *)(param_1 + 0x68) << 3;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
  lVar5 = 0;
  *(ulong *)(param_1 + 0x18) = uVar7 ^ uVar11;
  puVar6 = (ulong *)(param_1 + 0x58);
  *puVar6 = uVar11;
  uVar7 = *(long *)(param_1 + 0x70) << 3;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
  *(ulong *)(param_1 + 0x20) = uVar10 ^ uVar7;
  *(ulong *)(param_1 + 0x60) = uVar7;
  bVar3 = *(byte *)(param_1 + 0x27);
  uVar7 = (ulong)(bVar3 >> 4);
  uVar10 = (ulong)bVar3 & 0xf;
  do {
    lVar4 = param_1 + uVar10 * 0x10;
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    *puVar6 = *(ulong *)(lVar4 + 0x88);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar10 = *(ulong *)(param_1 + 0x58);
    uVar11 = *(ulong *)(param_1 + 0x60);
    lVar4 = lVar5;
    while( true ) {
      lVar1 = param_1 + uVar7 * 0x10;
      uVar8 = *(ulong *)(lVar1 + 0x88) ^ uVar10 >> 4;
      uVar9 = uVar8 ^ (ulong)*(uint *)(&DAT_03a7180c + (uVar11 & 0xf) * 4) << 0x20;
      lVar5 = lVar4 + -1;
      uVar11 = *(ulong *)(lVar1 + 0x90) ^ (uVar11 >> 4 | uVar10 << 0x3c);
      *(ulong *)(param_1 + 0x58) = uVar9;
      *(ulong *)(param_1 + 0x60) = uVar11;
      if (lVar4 == -0xf) {
        *(ulong *)(param_1 + 0x18) = *puVar6;
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x60);
        uVar7 = (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar10 = (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x48) ^ (uVar7 >> 0x20 | uVar7 << 0x20);
        *(ulong *)(param_1 + 0x20) = (uVar10 >> 0x20 | uVar10 << 0x20) ^ *(ulong *)(param_1 + 0x50);
        return;
      }
      bVar3 = ((byte *)(param_1 + 0x27))[lVar5];
      uVar7 = (ulong)(bVar3 >> 4);
      uVar10 = (ulong)bVar3 & 0xf;
      if (lVar5 == 0) break;
      lVar4 = param_1 + uVar10 * 0x10;
      uVar10 = *(ulong *)(lVar4 + 0x88) ^ uVar9 >> 4 ^
               (ulong)*(uint *)(&DAT_03a7180c + (uVar11 & 0xf) * 4) << 0x20;
      uVar11 = *(ulong *)(lVar4 + 0x90) ^ (uVar11 >> 4 | uVar8 << 0x3c);
      *(ulong *)(param_1 + 0x58) = uVar10;
      *(ulong *)(param_1 + 0x60) = uVar11;
      lVar4 = lVar5;
    }
  } while( true );
}


