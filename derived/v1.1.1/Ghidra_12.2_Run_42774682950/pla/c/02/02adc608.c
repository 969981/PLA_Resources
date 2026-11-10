/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adc608; name: FUN_02adc608
 */


void FUN_02adc608(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_38;
  
  *param_1 = &PTR_FUN_04282ff0;
  param_1[1] = param_2;
  lVar9 = *param_3;
  param_1[2] = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x43] = &PTR_LAB_04283020;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = &PTR_LAB_04283020;
  param_1[0x50] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = &PTR_LAB_04283020;
  param_1[0x57] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = &PTR_LAB_04283020;
  param_1[0x5e] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = &PTR_LAB_04283020;
  param_1[0x65] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = &PTR_LAB_04283020;
  param_1[0x6c] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0x94) = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = &PTR_LAB_04283060;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = &PTR_LAB_04283020;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &PTR_LAB_04283020;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = &PTR_LAB_04283020;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = &PTR_LAB_04283020;
  param_1[0x1a] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = &PTR_LAB_04283020;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = &PTR_LAB_04283020;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &PTR_LAB_04283020;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = &PTR_LAB_04283020;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = &PTR_LAB_04283020;
  puVar2 = PTR_DAT_043826e0 + 0x10;
  param_1[0xd7] = &PTR_LAB_04283020;
  param_1[0xde] = &PTR_LAB_04283020;
  param_1[0xe5] = &PTR_LAB_04283020;
  param_1[0xec] = &PTR_LAB_04283020;
  param_1[0xf3] = &PTR_LAB_04283020;
  param_1[0xfa] = &PTR_LAB_04283020;
  param_1[0x101] = &PTR_LAB_04283020;
  param_1[0x11e] = &PTR_LAB_04283020;
  param_1[0x125] = &PTR_LAB_04283020;
  param_1[300] = &PTR_LAB_04283020;
  param_1[0x133] = &PTR_LAB_04283020;
  param_1[0x13a] = &PTR_LAB_04283020;
  param_1[0xd0] = puVar2;
  param_1[0x108] = puVar2;
  param_1[0x10f] = puVar2;
  param_1[0xd6] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xdd] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe4] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xeb] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf2] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  param_1[0xf9] = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0x100] = 0;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x107] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x10e] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x117] = &PTR_LAB_042830a0;
  param_1[0x11d] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x124] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[299] = 0;
  param_1[0x131] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  param_1[0x12e] = 0;
  param_1[0x12d] = 0;
  param_1[0x132] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x139] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x146) = 0;
  *(undefined1 *)(param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x155) = 0;
  local_38 = *(long **)(*(long *)(param_1[2] + 0x60) + 0x58);
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x198,8);
  if (lVar7 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_02b2ee4c(lVar7,&local_38);
  *(long **)(lVar7 + 8) = param_2;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x198;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  param_1[3] = lVar7;
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


