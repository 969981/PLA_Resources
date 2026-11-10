/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1b730; name: ~stringbuf
 */


/* std::stringbuf::~stringbuf() */

void __thiscall std::stringbuf::~stringbuf(stringbuf *this)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined **)this = PTR_vtable_0437c0b0 + 0x10;
  plVar2 = DAT_043f1798;
  lVar1 = tpidr_el0;
  if ((((byte)this[0x40] & 1) != 0) && (lVar4 = *(long *)(this + 0x50), lVar4 != 0)) {
    plVar5 = *(long **)(lVar1 + 0x20);
    if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
      *(long **)(lVar1 + 0x20) = DAT_043f1798;
      plVar5 = plVar2;
    }
    uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar4,0,8);
        goto LAB_00e1b80c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0,8);
  }
LAB_00e1b80c:
  std::streambuf::~streambuf((streambuf *)this);
  plVar2 = DAT_043f1798;
  plVar5 = *(long **)(lVar1 + 0x20);
  if (*(long **)(lVar1 + 0x20) == (long *)0x0) {
    *(long **)(lVar1 + 0x20) = DAT_043f1798;
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar5,this,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e1b8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,this,0,8);
  return;
}


